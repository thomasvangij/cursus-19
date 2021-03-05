/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:24:57 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/05 13:32:11 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_first_count(const char *s1, const char *set)
{
	int		j;
	int		k;

	j = 0;
	k = -1;
	while (++k >= 0)
	{
		if (s1[j] == set[k])
		{
			j++;
			k = -1;
		}
		if (k > 0 && !(set[k]))
			break ;
	}
	return (j);
}

int		ft_last_count(const char *s1, const char *set)
{
	int	i;
	int	j;
	int k;

	i = 0;
	j = 0;
	k = -1;
	while (s1[i])
		i++;
	while (++k >= 0)
	{
		if (s1[i - 1] == set[k])
		{
			j++;
			i--;
			k = -1;
		}
		if (k > 0 && !(set[k]))
			break ;
	}
	return (j);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		count;
	int		i;
	int		k;
	char	*str_t;

	if (!s1 || !set)
		return (NULL);
	k = ft_last_count(s1, set);
	i = ft_first_count(s1, set);
	count = 0;
	while (s1[count])
		count++;
	count = count - k - i;
	if (count < 0)
		count = 0;
	if (!(str_t = (char *)malloc(count + 1)))
		return (NULL);
	k = 0;
	while (s1[i + k] && k < count)
	{
		str_t[k] = (char)(s1[i + k]);
		k++;
	}
	str_t[k] = '\0';
	return (str_t);
}
