/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:21:38 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 13:21:47 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*str_j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	i += j;
	if (!(str_j = (char *)malloc(i + 1)))
		return (NULL);
	j = -1;
	i = -1;
	while (s1[++j])
		str_j[j] = s1[j];
	while (s2[++i])
		str_j[j + i] = s2[i];
	str_j[j + i] = '\0';
	return (str_j);
}
