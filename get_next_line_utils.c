/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:59:42 by atahtouh          #+#    #+#             */
/*   Updated: 2023/12/09 12:16:03 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

<<<<<<< HEAD
int	ft_strlen(char *s)
=======
int ft_strlen(const char *s)
>>>>>>> 140632516b8db00245aa362671dabbfa305656ad
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}

<<<<<<< HEAD
char	*ft_strdup(char *s)
{
	char	*ptr;
	int		i;

	if (!s)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*ptr;
	int		all;

	i = 0;
	j = 0;
	if (!s1)
		 //s1 = ft_strdup("");
		return (ft_strdup(s2));
	// if (!s2)
	// 	return (NULL);
	all = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc((all + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i])
=======
char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*p;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	p = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
>>>>>>> 140632516b8db00245aa362671dabbfa305656ad
	{
		p[i] = s1[i];
		i++;
	}
<<<<<<< HEAD
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr [i] = '\0';
	free (s1);
	return (ptr);
}

char	*ft_strchar(char *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
=======
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
char	*ft_strchr(char *str, int c)
{
	char	s;
	int		i;

	i = 0;
	s = (char )c;
	while (str[i] != '\0')
	{
		if (str[i] == s)
			return (str + i);
>>>>>>> 140632516b8db00245aa362671dabbfa305656ad
		i++;
	}
	if (!c)
		return (str + i);
	return (NULL);
}

<<<<<<< HEAD
char	*ft_substr(char *s, int start, int size)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[i] && i < start)
		i++;
	while (s[i] && j < size)
=======
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
>>>>>>> 140632516b8db00245aa362671dabbfa305656ad
	{
		return (NULL);
	}
	while (s[i] != '\0' && i < start)
	{
	i++;
	}
	while (s[i] != '\0' && j < len)
	{
		p[j] = s[i];
		j++;
		i++;
	}
<<<<<<< HEAD
	ptr[j] = '\0';
	return (ptr);
}
=======
	p[j] = '\0';
	return (p);
}
>>>>>>> 140632516b8db00245aa362671dabbfa305656ad
