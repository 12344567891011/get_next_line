/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:59:42 by atahtouh          #+#    #+#             */
/*   Updated: 2023/12/07 11:30:42 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}

char *ft_strjoin(char *s1, char *s2)
{
	int i;
	int j;
	char *ptr;
	int all;
	
	i = 0;
	j = 0;
	all = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc((all + 1) * sizeof(char));
	if(!ptr)
		return (NULL);
	while(s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while(s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr [i] = '\0';
	return (ptr);
}

char *ft_strchar(char *s, char c)
{
	int i;

	i = 0;
	while(s[i])
	{
		if(s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}

char *ft_substr(char *s, int start, int size)
{
	int i;
	int j;
	char *ptr;

	i = 0;
	j = 0;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if(!ptr)
		return(NULL);
	while(s[i] && i < start)
		i++;
	while(s[i] && j < size)
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}