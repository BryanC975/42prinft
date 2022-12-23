/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryhack <bryhack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:18:17 by bcaguana          #+#    #+#             */
/*   Updated: 2022/12/03 13:49:42 by bryhack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlista;
	t_list	*nnode;

	nlista = 0;
	if (!lst)
		return (NULL);
	while (lst)
	{
		nnode = ft_lstnew(f(lst -> content));
		if (!nnode)
			ft_lstclear(&nlista, del);
		ft_lstadd_back(&nlista, nnode);
		lst = lst -> next;
	}
	return (nlista);
}
