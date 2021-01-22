/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:22:01 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/22 17:44:41 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlenc(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;

	i = 0;
	j = ft_strlenc(src);
	lendst = ft_strlenc(dst);
	if (dstsize > 0 && dstsize - lendst - 1 > 0)
		while (dstsize - lendst - 1 > i && i < j)
		{
			dst[lendst + i] = src[i];
			i++;
		}
	dst[lendst + i] = '\0';
	return (lendst + j);
}
