/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:11:34 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/05 13:21:09 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*mem;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = size * count;
	if (!(mem = malloc(j)))
		return (NULL);
	while (j--)
	{
		mem[i] = 0;
		i++;
	}
	return ((void *)mem);
}
