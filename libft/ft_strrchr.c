/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:24:22 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 13:24:27 by tvan-gij         ###   ########.fr       */
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
	return (0);
}
