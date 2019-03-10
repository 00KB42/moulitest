/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:31:32 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/12 13:31:34 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hsk, const char *ndl, size_t len)
{
	size_t			ndl_i;
	size_t			hsk_i;
	const char		*ptr;

	ndl_i = 0;
	hsk_i = 0;
	if (ndl[ndl_i] == '\0')
		return ((char *)hsk);
	while (hsk[hsk_i] && hsk_i < len)
	{
		while (ndl[ndl_i] == hsk[hsk_i + ndl_i] && ndl[ndl_i]
			&& (hsk_i + ndl_i) < len)
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
