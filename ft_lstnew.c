/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:12:46 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:12:50 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_list;

	new_list = (struct s_list *)malloc(sizeof(struct s_list));
	if (new_list)
	{
		if (content == NULL)
		{
			new_list->content = NULL;
			new_list->content_size = 0;
			new_list->next = NULL;
			return (new_list);
		}
		else
		{
			new_list->content = ft_memalloc(content_size);
			new_list->content = ft_memcpy(new_list->content,
				content, content_size);
			new_list->content_size = content_size;
			new_list->next = NULL;
			return (new_list);
		}
	}
	else
		return (NULL);
}
