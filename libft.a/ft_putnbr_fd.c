/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij </var/mail/tvan-gij>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 13:23:27 by tvan-gij          #+#    #+#             */
/*   Updated: 2020/12/30 13:34:49 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -n;
	}
	else
		i = n;
	if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		i %= 10;
	}
	ft_putchar_fd(i + '0', fd);
}
