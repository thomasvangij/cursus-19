/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:15:44 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 13:16:02 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *restrict dst, const void *restrict src, unsigned int n)
{
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	while (n-- > 0)
		dest[n] = source[n];
	return (dst);
}
