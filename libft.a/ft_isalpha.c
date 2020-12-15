/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij </var/mail/tvan-gij>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:17:01 by tvan-gij          #+#    #+#             */
/*   Updated: 2020/12/15 16:27:39 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	unsigned char	d;

	d = (unsigned char)c;
	if ((d > 64 && d < 91) || (d > 96 && d < 123))
		return (1);
	return (0);
}