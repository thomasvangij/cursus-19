/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:26:05 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/02/11 14:29:35 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

	i = check_s_len(s);
	if (i <= start)
		return (NULL);
	i = start;
	while (s[i])
		i++;
	i -= start;
	if (i > len)
		i = len;
	if (!(subs = (char *)malloc(i + 1)))
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	subs[i] = '\0';
	return (subs);
}
