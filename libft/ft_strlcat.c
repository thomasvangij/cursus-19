/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:22:01 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/02 18:57:51 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
size_t	ft_strlenc(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	lendst;

	i = 0;
	j = 0;
	lendst = 0;
	while (dst[lendst] != '\0' && lendst < dstsize)
		lendst++;
	while (src[j])
		j++;
	i = j + lendst;
	if (lendst == dstsize)
		return (i);
	j = 0;
	while (src[j] && lendst + j < dstsize - 1)
	{
			dst[lendst + j] = src[j];
			j++;
	}
	dst[lendst + j] = '\0';
	return (i);
}
