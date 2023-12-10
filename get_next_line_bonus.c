/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 11:48:30 by atahtouh          #+#    #+#             */
/*   Updated: 2023/12/10 14:10:25 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

// int ft_check_line(char *s)
// {
// 	int i;
// 	i = 0;
// 	if(!s)
// 		return(0);
// 	while(s[i])
// 	{
// 		if (s[i] == '\n')
// 			return (i);
// 		i++;
// 	}
// 	return (0);
// }

char	*ft_read(int fd, char *s)
{
	int		i ;
	char	*ptr;
	int		bytes_read;

	i = 0;
	ptr = (char *)malloc(1 + (BUFFER_SIZE) * sizeof(char));
	if (!ptr)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, ptr, BUFFER_SIZE);
		if (bytes_read < 0)
			break ;
		ptr[bytes_read] = '\0';
			s = ft_strjoin(s, ptr);
		if (ft_strchar(ptr, '\n'))
			break ;
	}
	if (bytes_read == -1)
		return (free(s), free(ptr), ft_strdup(""));
	free (ptr);
	return (s);
}

char	*ft_extrat_line(char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	if (!s[0])
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	ptr = ft_substr(s, 0, i + 1);
	return (ptr);
}

char	*ft_rest(char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i] || !s)
		return (NULL);
	i++;
	ptr = ft_substr(s, i, ft_strlen(s) - i);
	return (ptr);
}

char	*get_next_line(int fd)
{
	static char	*p1[BUFFER_SIZE];
	char		*s;
	char		*ligne;
	
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s = ft_read(fd, p1[fd]);
	if (!s)
		return (NULL);
	ligne = ft_extrat_line(s);
	p1[fd] = ft_rest(s);
	free (s);
	return (ligne);
}

int main()
{
    int fd = open("test.txt", O_RDWR);
	int fd1 = open("test1.txt", O_RDWR);
    char *line1 = get_next_line(fd);
	char *line2 = get_next_line(fd1);
    printf("%s",line1);
	printf("%s",line2);
    free(line1);
	free(line2);
    close(fd);
	close(fd1);
}
