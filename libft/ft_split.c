/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:20:23 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/03/09 18:06:24 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_sep(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int		word_nbr(const char *s, char c)
{
	int	i;
	int	j;
	int	word_nbr;

	i = 0;
	j = 0;
	word_nbr = 0;
	while (s[i])
	{
		while (is_sep(s[i], c) && s[i])
			i++;
		if (!(is_sep(s[i], c)) && s[i])
			word_nbr++;
		while (!(is_sep(s[i], c)) && s[i])
			i++;
	}
	return (word_nbr);
}

char	*ft_strdupp(const char *s, char c, int j)
{
	char	*w_str;
	int		i;
	int		w_len;

	w_len = 0;
	while (!(is_sep(s[j + w_len], c)) && s[j + w_len])
		w_len++;
	i = -1;
	if (!(w_str = (char *)malloc(w_len + 1)))
		return (NULL);
	while (++i < w_len)
		w_str[i] = s[j + i];
	w_str[i] = '\0';
	return (w_str);
}

void	split_error(char **res_tab, int i)
{
	while (--i > -1)
		free(res_tab[i]);
	free(res_tab);
}

char	**ft_split(const char *s, char c)
{
	char	**res_tab;
	int		i;
	int		j;
	int		size;

	if (!s || !(res_tab = \
				(char **)malloc(sizeof(char *) * (word_nbr(s, c) + 1))))
		return (NULL);
	size = word_nbr(s, c);
	i = -1;
	j = 0;
	while (++i < size)
	{
		while (is_sep(s[j], c))
			j++;
		if (!(res_tab[i] = ft_strdupp(s, c, j)))
		{
			split_error(res_tab, i);
			return (NULL);
		}
		while (!(is_sep(s[j], c)) && s[j])
			j++;
	}
	res_tab[size] = 0;
	return (res_tab);
}
