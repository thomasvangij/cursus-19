/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij </var/mail/tvan-gij>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 15:22:22 by tvan-gij          #+#    #+#             */
/*   Updated: 2020/12/10 15:53:09 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	occurs;
	unsigned char	*str;
	size_t			i;

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
