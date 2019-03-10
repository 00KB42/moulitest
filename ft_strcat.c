/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:25:49 by kbrown            #+#    #+#             */
/*   Updated: 2018/11/12 13:25:51 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	src_ctr;
	size_t	dst_ctr;

	src_ctr = 0;
	dst_ctr = 0;
	while (s1[src_ctr])
		src_ctr++;
	while (s2[dst_ctr])
	{
		s1[src_ctr] = s2[dst_ctr];
		dst_ctr++;
		src_ctr++;
	}
	s1[src_ctr] = '\0';
	return (s1);
}
