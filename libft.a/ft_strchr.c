/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij </var/mail/tvan-gij>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:26:39 by tvan-gij          #+#    #+#             */
/*   Updated: 2020/12/15 14:47:20 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	occurs;
	char	*strs;

	i = 0;
	occurs = (char)c;
	strs = (char *)s;
	while (strs[i] != occurs)
		if (strs[++i] == occurs)
			return (strs + i);
	return (NULL);
}
