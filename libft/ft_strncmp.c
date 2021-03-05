/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:23:31 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/05 13:31:02 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((unsigned char)(s1[i]) == (unsigned char)(s2[i]) && i < n && s1[i])
		i++;
	if (i == n)
		i--;
	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
