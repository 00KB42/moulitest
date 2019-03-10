/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:28:40 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/12 13:28:56 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	src_ctr;
	size_t	dst_ctr;

	src_ctr = 0;
	dst_ctr = 0;
	while (s1[src_ctr])
		src_ctr++;
	while (s2[dst_ctr] && dst_ctr < n)
	{
		s1[src_ctr] = s2[dst_ctr];
		dst_ctr++;
		src_ctr++;
	}
	s1[src_ctr] = '\0';
	return (s1);
}
