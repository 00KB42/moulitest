/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:19:49 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:19:50 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wrd_ctr(char const *s, char c)
{
	int		i;
	int		wrd_cnt;

	i = 0;
	wrd_cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			wrd_cnt++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (wrd_cnt);
}

static int	wrd_len(char const *s, int i, char c)
{
	int		len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	if (!s || !c)
		return (NULL);
	array = (char**)malloc(((ft_wrd_ctr(s, c)) + 1) * sizeof(char*));
	if (!array)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			array[j] = ft_strsub(s, i, (wrd_len(s, i, c)));
			i = wrd_len(s, i, c) + i;
			j++;
		}
	}
	array[j] = NULL;
	return (array);
}
