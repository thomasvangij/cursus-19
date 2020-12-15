/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij </var/mail/tvan-gij>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 15:07:01 by tvan-gij          #+#    #+#             */
/*   Updated: 2020/12/15 15:21:58 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ans;

	i = 0;
	ans = (char *)haystack;
	if (needle[i] == '\0')
		return (ans);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (ans + i);
		}
		i++;
	}
	return (0);
}
