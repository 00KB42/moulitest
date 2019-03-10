/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbrown <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:20:06 by kbrown            #+#    #+#             */
/*   Updated: 2019/01/02 10:20:08 by kbrown           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_trim_null(char *ptr)
{
	ptr = (char *)malloc(1 * sizeof(char));
	ptr[0] = '\0';
	return (ptr);
}

char		*ft_strtrim(char const *s)
{
	char	*ptr;
	int		i;
	int		fwd;
	int		bwd;

	if (!s)
		return (NULL);
	i = 0;
	fwd = 0;
	bwd = (ft_strlen(s) - 1);
	while (s[fwd] && (s[fwd] == ' ' || s[fwd] == '\n' || s[fwd] == '\t'))
		fwd++;
	if (!s[fwd])
		return (ft_trim_null((char *)s));
	while (s[bwd] && (s[bwd] == ' ' || s[bwd] == '\n' || s[bwd] == '\t'))
		bwd--;
	ptr = (char*)malloc(((bwd + 2) - fwd) * sizeof(char));
	if (!ptr)
		return (NULL);
	s = &s[fwd];
	ft_strncpy(ptr, s, ((bwd + 1) - fwd));
	ptr[((bwd + 1) - fwd)] = '\0';
	return (ptr);
}
