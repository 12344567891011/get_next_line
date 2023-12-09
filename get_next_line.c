/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:22:33 by atahtouh          #+#    #+#             */
/*   Updated: 2023/12/09 10:03:33 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
<<<<<<< HEAD
	int		i ;
	char	*ptr;
	int		bytes_read;
=======
	char *ptr;
	int bytes_read;
	int nb;
>>>>>>> 140632516b8db00245aa362671dabbfa305656ad

	ptr = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, ptr, BUFFER_SIZE);
		if (bytes_read == -1)
			break ;
		ptr[bytes_read] = '\0';
		if (!s)
<<<<<<< HEAD
			s = ft_strjoin(NULL, ptr);
		else
			s = ft_strjoin(s, ptr);
		if (ft_strchar(s, '\n'))
			break ;
=======
			s = ft_strjoin(NULL,ptr);
		else
			s = ft_strjoin(s,ptr);
		nb = ft_check_line(s);
		if(nb > 0)
			break;
>>>>>>> 140632516b8db00245aa362671dabbfa305656ad
	}
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
	if (!s[i])
		return (NULL);
	i++;
	ptr = ft_substr(s, i, ft_strlen(s) - i);
	return (ptr);
}

char	*get_next_line(int fd)
{
	static char	*p1;
	char		*s;
	char		*ligne;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s = ft_read(fd, p1);
	if (!s)
		return (NULL);
	ligne = ft_extrat_line(s);
	p1 = ft_rest(s);
	return (ligne);
}

// int main()
// {
//     int fd = open("test.txt", O_RDWR | O_CREAT, 0777);
//     char *line1 = get_next_line(fd);
// 	char *line2 = get_next_line(fd);
//     printf("%s",line1);
// 	printf("%s",line2);
//     free(line1);
// 	free(line2);
// 	char *line3 = get_next_line(fd);
//     printf("%s\n",line3);
//     //close(fd);
// }
