/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij </var/mail/tvan-gij>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:38:30 by tvan-gij          #+#    #+#             */
/*   Updated: 2020/12/10 17:04:54 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dst, const char *restrict src, size_t dstsize)
{
	size_t		i;
	char		*dest;
	const char	*source;

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
