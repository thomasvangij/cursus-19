/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:26:05 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/05 13:32:39 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	check_s_len(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char			*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	unsigned int	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = check_s_len(s);
	if (s_len < start)
	{
		if (!(subs = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (!(subs = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	subs[i] = '\0';
	return (subs);
}
