/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:09:56 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:11:06 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t i;
	size_t *ptr;

	i = 0;
	ptr = (size_t *)malloc(size * (sizeof(int)));
	if (ptr)
	{
		while (i < size)
		{
			ptr[i] = 0;
			i++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
