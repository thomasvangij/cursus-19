/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:13:52 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/19 17:14:18 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*a;

	i = n;
	j = 1;
	while (i /= 10)
		j++;
	if (n < 0)
		j++;
	if (!(a = (char *)malloc(j + 1)))
		return (NULL);
	if (n < 0)
		a[0] = 45;
	a[j] = '\0';
	if (!n)
		a[0] = 48;
	while (n)
	{
		if (n < 0)
			a[--j] = 48 - (n % 10);
		else
			a[--j] = 48 + (n % 10);
		n /= 10;
	}
	return (a);
}