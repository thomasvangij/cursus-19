/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:14:50 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 13:15:03 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	occurs;
	unsigned char	*str;
	unsigned int	i;

	occurs = c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == occurs)
			return (&str[i]);
		i++;
	}
	return (0);
}
