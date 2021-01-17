/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:16:15 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 13:16:34 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	while (len-- > 0)
		dest[len] = source[len];
	return (dst);
}
