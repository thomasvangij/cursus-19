/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:21:22 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/02 19:22:53 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (s1[i])
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	j = 0;
	while (j < i)
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
