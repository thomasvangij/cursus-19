/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:20:46 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/02/09 16:43:41 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*strs;

	i = -1;
	strs = (char *)s;
	while (strs[++i] || !c)
	{
		if (strs[i] == (char)c)
			return (strs + i);
	}
	return (0);
}
