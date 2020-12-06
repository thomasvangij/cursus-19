/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij </var/mail/tvan-gij>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 16:58:47 by tvan-gij          #+#    #+#             */
/*   Updated: 2020/12/06 17:46:23 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *restrict dst, \\
		const void *restrict src, int c, size_t n)
{
	unsigned char	occurs;
	char			*dest;
	const char		*source;
	size_t			i;

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
