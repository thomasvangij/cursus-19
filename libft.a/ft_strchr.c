/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:20:46 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 13:21:12 by tvan-gij         ###   ########.fr       */
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
	return (0);
}
