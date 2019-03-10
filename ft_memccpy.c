/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 12:39:07 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/05 12:48:11 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src,
		int c, size_t n)
{
	size_t		i;
	const char	*ptr_src;
	char		*ptr_dst;

	ptr_dst = dst;
	ptr_src = src;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)ptr_src[i] == (unsigned char)c)
		{
			ptr_dst[i] = ptr_src[i];
			dst = &dst[i + 1];
			return (dst);
		}
		else
		{
			ptr_dst[i] = ptr_src[i];
			i++;
		}
	}
	return (NULL);
}
