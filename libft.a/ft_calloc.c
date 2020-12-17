/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij </var/mail/tvan-gij>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 17:02:38 by tvan-gij          #+#    #+#             */
/*   Updated: 2020/12/17 17:12:07 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	size *= count;
	if (!(mem = (void *)malloc(size)))
		return (NULL);
	while (size > 0)
		mem[--size] = '\0';
	return (mem);
}
