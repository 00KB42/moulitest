/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:12:42 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:13:03 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *res;
    
    while (lst)
    {
        res = f(lst);
        res->next = ft_lstmap(lst->next, f);
        return (res);
    }
    return (NULL);
}
