/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:23:31 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 13:23:38 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	char			*str1;
	char			*str2;
	unsigned int	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (str1[i] == str2[i] && i < n && *str1 != '\0')
		i++;
	if (i == n)
		i--;
	return (str1[i] - str2[i]);
}
