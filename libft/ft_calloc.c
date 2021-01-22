/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:11:34 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/22 16:24:58 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	size *= count;
	if (!(mem = (void *)malloc(size)))
		return (NULL);
	while (--size > 0)
	{
		*(char *)mem = '\0';
		mem++;
	}
	return (mem);
}
