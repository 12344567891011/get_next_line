/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:59:42 by atahtouh          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/12/10 11:44:59 by atahtouh         ###   ########.fr       */
=======
/*   Updated: 2023/12/09 14:20:56 by atahtouh         ###   ########.fr       */
>>>>>>> 9ab363e7372f9f44c63728d2e1ed6b650049e655
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
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
		s1 = ft_strdup("");
	if (!s2)
		return (NULL);
	all = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc((all + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr [i] = '\0';
	free (s1);
	return (ptr);
}

int	ft_strchar(char *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_substr(char *s, int start, int size)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
<<<<<<< HEAD
	if (!s)
=======
	if(!s)
>>>>>>> 9ab363e7372f9f44c63728d2e1ed6b650049e655
		return (NULL);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s[i] && i < start)
		i++;
	while (s[i] && j < size)
	{
		ptr[j] = s[i];
		i++;
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
