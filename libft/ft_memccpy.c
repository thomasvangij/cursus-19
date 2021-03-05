/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:14:16 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/05 13:24:00 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n && ((unsigned char *)src)[i] != (unsigned char)c)
	{
		((char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	if (((unsigned char *)src)[i] == (unsigned char)c)
	{
		((char *)dst)[i] = ((unsigned char *)src)[i];
		return (&((char *)dst)[i + 1]);
	}
	return (0);
}
