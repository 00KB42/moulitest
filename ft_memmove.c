/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:25:07 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/12 13:25:09 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*ptr_src;
	char		*ptr_dst;

	i = 0;
	ptr_dst = dst;
	ptr_src = src;
	if (ptr_src < ptr_dst)
	{
		while (len != 0)
		{
			ptr_dst[len - 1] = ptr_src[len - 1];
			len--;
		}
	}
	while (i < len)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}
	return (dst);
}
