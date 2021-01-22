/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:14:50 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/22 16:09:05 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	occurs;
	unsigned char	*str;
	size_t			i;

	occurs = c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == occurs)
			return (&str[i]);
		i++;
	}
	return (0);
}
