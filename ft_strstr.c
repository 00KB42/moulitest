/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:34:17 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/12 13:34:21 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hsk, const char *ndl)
{
	size_t			ndl_i;
	size_t			hsk_i;
	const char		*ptr;

	ndl_i = 0;
	hsk_i = 0;
	if (ndl[ndl_i] == '\0')
		return ((char *)hsk);
	while (hsk[hsk_i])
	{
		while (ndl[ndl_i] == hsk[hsk_i + ndl_i] && ndl[ndl_i] && hsk[hsk_i])
			ndl_i++;
		if (ft_strlen(ndl) == ndl_i)
		{
			ptr = &hsk[hsk_i];
			return ((char*)ptr);
		}
		else
			ndl_i = 0;
		hsk_i++;
	}
	return (NULL);
}
