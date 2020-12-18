/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij </var/mail/tvan-gij>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 17:32:42 by tvan-gij          #+#    #+#             */
/*   Updated: 2020/12/18 17:44:03 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (s[i])
		i++;
	if (!(str = (char *)malloc(i + 1)))
		return (NULL);
	str[i] = '\0';
	while (i--)
		str[i] = f(i, str[i]);
	return (str);
}
