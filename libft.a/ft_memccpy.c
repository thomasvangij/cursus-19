/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:14:16 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/18 18:41:49 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	unsigned char	occurs;
	char			*dest;
	const char		*source;
	unsigned int	i;

	occurs = c;
	dest = dst;
	source = src;
	i = 0;
	while (i < n && source[i] != occurs)
	{
		dest[i] = source[i];
		i++;
	}
	if (source[i] == occurs)
		return (dst + i + 1);
	return (0);
}
