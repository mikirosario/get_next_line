/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 17:08:28 by mrosario          #+#    #+#             */
/*   Updated: 2019/11/29 22:41:12 by mrosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	s1size;
	size_t	s2size;
	size_t	cindex;
	char	*combo;

	s1size = 0;
	s2size = 0;
	cindex = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[s1size])
		s1size++;
	while (s2[s2size])
		s2size++;
	s2size += 1;
	if (!(combo = malloc((s1size + s2size) * sizeof(char))))
		return (NULL);
	while (*s1)
		combo[cindex++] = *s1++;
	while (*s2)
		combo[cindex++] = *s2++;
	combo[cindex] = '\0';
	return (combo);
}

char	*ft_strdup(char *s1)
{
	char				*ptr;
	long unsigned int	i;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i])
		i++;
	if (!(ptr = malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
** Searches for char in str. If char is found, returns index of char.
** If char is not found, returns -1. For finding newlines.
*/

int		ft_chrcmp(char *s1, char c)
{
	int	i;

	i = 0;
	if (!s1)
		return (-1);
	while (s1[i])
	{
		if (s1[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
