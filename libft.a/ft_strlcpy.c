/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:22:17 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 13:40:46 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *restrict dst, //
		const char *restrict src, unsigned int dstsize)
{
	unsigned int	i;
	char			*dest;
	const char		*source;

	i = 0;
	dest = dst;
	source = src;
	while (--dstsize && source[i])
	{
		dest[i] = source[i];
		i++;
	}
	dest[i] = '\0';
	while (dstsize == 0 && source[i])
		i++;
	return (i);
}
