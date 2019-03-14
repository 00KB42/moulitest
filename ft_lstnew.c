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

t_list		*ft_lstnew(void const *content, size_t content_size)
{
    t_list	*new;
    
    new = (t_list*)ft_memalloc(sizeof(*new));
    if (!new)
        return (NULL);
    if (!content)
    {
        new->content = NULL;
        new->content_size = 0;
    }
    else
    {
        new->content_size = content_size;
        new->content = ft_memalloc(content_size);
        if (!new->content)
        {
            free(new);
            return (NULL);
        }
        new->content = ft_memcpy(new->content, content, content_size);
    }
    new->next = NULL;
    return (new);
}
