/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:22:17 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/02 18:40:15 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	char		*dest;
	const char	*source;

	i = 0;
	dest = dst;
	source = src;
	if (!dst || !src)
		return (0);
	while (dstsize == 0 && source[i])
	{
		i++;
		if (!source[i])
			return (i);
	}
	while (--dstsize && source[i])
	{
		dest[i] = (source[i]);
		i++;
	}
	dest[i] = '\0';
	while (dstsize == 0 && source[i])
		i++;
	return (i);
}
