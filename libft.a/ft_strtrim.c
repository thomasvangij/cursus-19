/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:24:57 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 13:25:08 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	k = 0;
	while (set[k])
		k++;
	while (s1[j])
		j++;
	while (s1[j - i] == set[k - i])
		i++;
	if (i == k + 1)
		j -= k;
	i = 0;
	while (s1[i] == set[i])
		i++;
	if (i == k)
		j -= k;
	return (j);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		count;
	int		i;
	int		k;
	char	*str_t;

	count = ft_count(s1, set);
	if (!(str_t = (char *)malloc(count + 1)))
		return (NULL);
	i = 0;
	while (s1[i] == set[i])
		i++;
	if (set[i])
		i = 0;
	k = 0;
	while (s1[i] && k < count)
	{
		str_t[k] = s1[i];
		i++;
		k++;
	}
	str_t[k] = '\0';
	return (str_t);
}
