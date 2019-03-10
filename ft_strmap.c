/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:19:23 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:19:24 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	int		j;

	j = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	ptr = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (ptr)
	{
		while (s[j])
		{
			ptr[j] = (f(s[j]));
			j++;
		}
		ptr[j] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}
