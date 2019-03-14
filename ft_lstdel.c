/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:12:29 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:12:57 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *ptr;

	ptr = *alst;
	while (ptr->next != NULL)
	{
		del((*ptr).content, (*ptr).content_size);
		ptr = ptr->next;
	}
	del((*ptr).content, (*ptr).content_size);
	free(ptr);
	*alst = NULL;
}
