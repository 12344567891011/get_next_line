/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:22:33 by atahtouh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/12/10 11:43:37 by atahtouh         ###   ########.fr       */
=======
/*   Updated: 2023/12/09 14:58:21 by atahtouh         ###   ########.fr       */
>>>>>>> 9ab363e7372f9f44c63728d2e1ed6b650049e655
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
	//int		i ;
	char	*ptr;
	int		bytes_read;

<<<<<<< HEAD
	i = 0;
	ptr = (char *)malloc(1 + (BUFFER_SIZE) * sizeof(char));
=======
	//i = 0;
	ptr = (char *)malloc((BUFFER_SIZE + 1));
>>>>>>> 9ab363e7372f9f44c63728d2e1ed6b650049e655
	if (!ptr)
		return (NULL);
	bytes_read = 1;
	// while (bytes_read > 0)
	while (1)
	{
		bytes_read = read(fd, ptr, BUFFER_SIZE);
<<<<<<< HEAD
		if (bytes_read < 0)
			break ;
		ptr[bytes_read] = '\0';
			s = ft_strjoin(s, ptr);
		if (ft_strchar(ptr, '\n'))
=======
		if (bytes_read == -1)
		{
			free(s);
			break;
		}
		ptr[bytes_read] = '\0';
		// if (!s)
		// 	s = ft_strjoin(NULL, ptr);
		//else
		s = ft_strjoin(s, ptr);
		if (ft_strchar(s, '\n') == 1)
>>>>>>> 9ab363e7372f9f44c63728d2e1ed6b650049e655
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
	if (!s)
		return (NULL);
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	if(s[i] == '\n')
		i+1;
	ptr = (char*)malloc((i + 1));
	if(!ptr)
	{
		free(s);
		return (NULL);
	}
	// printf(">>>>%d\n",i);
	i = 0;
	while(s[i]!= '\n' && s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_rest(char *s)
{
	int		i;
	char	*ptr;

	i = 0;
	if(!s)
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	if (!s[i] || !s)
		return (NULL);
	i++;
	ptr = ft_substr(s, i, ft_strlen(s) - i);
	free(s);
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
	free (s);
	return (ligne);
}

<<<<<<< HEAD
// int main()
// {
//     int fd = open("test.txt", O_RDWR | O_CREAT, 0777);
//     char *line1 = get_next_line(fd);
// 	char *line2 = get_next_line(fd);
//     printf("%s",line1);
// 	printf("%s",line2);
//     free(line1);
//     //close(fd);
// }
=======
int main()
{
    int fd = open("get_next_line.c", O_RDWR | O_CREAT, 0777);
    char *line1 = get_next_line(fd);
    printf("%s",line1);
 	free(line1);
    //close(fd);
}
>>>>>>> 9ab363e7372f9f44c63728d2e1ed6b650049e655
