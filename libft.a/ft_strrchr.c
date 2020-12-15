/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij </var/mail/tvan-gij>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:49:02 by tvan-gij          #+#    #+#             */
/*   Updated: 2020/12/15 15:00:48 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	occurs;
	char	*strs;

	i = 0;
	occurs = (char)c;
	strs = (char *)s;
	while (strs[i])
		i++;
	while (strs[i] != occurs)
		if (strs[--i] == occurs)
			return (strs + i);
	return (NULL);
}
