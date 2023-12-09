/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:59:45 by atahtouh          #+#    #+#             */
/*   Updated: 2023/12/08 14:29:39 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

<<<<<<< HEAD
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include <fcntl.h>
# include <string.h>
=======
# ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42 
#endif

int ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(char *str, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char *get_next_line(int fd);

>>>>>>> 140632516b8db00245aa362671dabbfa305656ad

int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchar(char *s, char c);
char	*ft_substr(char *s, int start, int size);
char	*get_next_line(int fd);
#endif
