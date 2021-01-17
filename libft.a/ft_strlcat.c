/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:22:01 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 13:42:47 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(const char *s);

unsigned int	ft_strlcat(char *restrict dst, //
		const char *restrict src, unsigned int dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lendst;

	i = 0;
	j = ft_strlen(src);
	lendst = ft_strlen(dst);
	while (dstsize - lendst - 1 > i && i < j)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + j);
}
