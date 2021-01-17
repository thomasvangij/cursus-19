/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvan-gij <tvan-gij@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:20:23 by tvan-gij          #+#    #+#             */
/*   Updated: 2021/01/17 13:38:17 by tvan-gij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int		word_len(const char *s, char c, int j)
{
	int	w_len;

	w_len = 0;
	while (!(is_sep(s[j + w_len], c)))
		w_len++;
	return (w_len);
}

char	*ft_strdupp(const char *s, char c, int j)
{
	char	*w_str;
	int		i;
	int		size;

	i = -1;
	size = word_len(s, c, j);
	if (!(w_str = (char *)malloc(size + 1)))
		return (NULL);
	while (++i < size)
		w_str[i] = s[j + i];
	w_str[i] = '\0';
	return (w_str);
}

char	**ft_split(const char *s, char c)
{
	char	**res_tab;
	int		i;
	int		j;
	int		size;

	size = word_nbr(s, c);
	if (!(res_tab = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		while (is_sep(s[j], c))
			j++;
		res_tab[i] = ft_strdupp(s, c, j);
		j += word_len(s, c, j);
		i++;
	}
	res_tab[size] = 0;
	free(res_tab);
	return (res_tab);
}
