/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:18:39 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/05 13:27:50 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchaar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (n < 0)
	{
		ft_putchaar_fd('-', fd);
		i = -n;
	}
	else
		i = n;
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		i %= 10;
	}
	ft_putchaar_fd(i + '0', fd);
}
