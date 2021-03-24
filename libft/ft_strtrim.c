/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:24:57 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/24 16:18:31 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_stlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	char_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char			*ft_strtrim(const char *s1, const char *set)
{
	int				i;
	int				first;
	int				last;
	unsigned int	size;
	char			*str_t;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && char_in_set(s1[i], set))
		i++;
	first = i;
	if ((i = ft_stlen(s1) - 1) != -1)
		while (i >= 0 && char_in_set(s1[i], set))
			i--;
	last = i;
	size = last - first + 2;
	if (!(str_t = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	i = first - 1;
	while (++i <= last)
		str_t[i - first] = s1[i];
	str_t[i - first] = '\0';
	return (str_t);
}
