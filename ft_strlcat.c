/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:27:27 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/12 13:27:29 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_ctr;
	size_t	src_len;
	size_t	dst_len;
	size_t	dst_len_orig;

	src_ctr = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	dst_len_orig = dst_len;
	if (size < dst_len)
		return (src_len + size);
	while (src[src_ctr] && dst_len < (size - 1))
	{
		dst[dst_len] = src[src_ctr];
		dst_len++;
		src_ctr++;
	}
	dst[dst_len] = '\0';
	return ((src_len + dst_len_orig));
}
