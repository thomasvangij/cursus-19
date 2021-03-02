/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:17:41 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/02 19:56:20 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlenb(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void			ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlenb(s));
	write(fd, "\n", 1);
}
