/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:11:34 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/02/11 14:10:30 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	set_zero(size_t *mem, size_t size)
{
	mem[size] = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	size *= count;
	if (!(mem = (void *)malloc(size)))
		return (mem);
	if (!size)
		return (mem);
	while (--size >= 0)
		set_zero(mem, size);
	return (mem);
}
