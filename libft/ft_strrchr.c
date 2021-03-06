/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:24:22 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/05 13:31:46 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*strs;

	i = 0;
	strs = (char *)s;
	while (*s)
		if (!*(++s))
			i = s - strs;
	i++;
	while (i)
		if (strs[--i] == (char)c)
			return (strs + i);
	return (0);
}
