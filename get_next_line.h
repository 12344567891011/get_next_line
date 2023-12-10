/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:59:45 by atahtouh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/12/10 11:28:03 by atahtouh         ###   ########.fr       */
=======
/*   Updated: 2023/12/09 14:10:54 by atahtouh         ###   ########.fr       */
>>>>>>> 9ab363e7372f9f44c63728d2e1ed6b650049e655
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2147483647
# endif
# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include <fcntl.h>
# include <string.h>

int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
int	 ft_strchar(char *s, char c);
char	*ft_substr(char *s, int start, int size);
char	*ft_strdup(char *s);
char	*get_next_line(int fd);
#endif
