/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:59:45 by atahtouh          #+#    #+#             */
/*   Updated: 2023/12/07 11:48:10 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42 
#endif

int ft_strlen(char *s);
char *ft_strjoin(char *s1, char *s2);
char *ft_strchar(char *s, char c);
char *ft_substr(char *s, int start, int size);
char *get_next_line(int fd);


#endif
