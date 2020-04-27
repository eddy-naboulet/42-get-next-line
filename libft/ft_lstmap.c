/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaboule <enaboul@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/28 15:11:37 by enaboule          #+#    #+#             */
/*   Updated: 2016/01/28 15:41:01 by enaboule         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lst2;
	t_list	*lst3;

	if ((lst2 = f(lst)) == NULL)
		return (NULL);
	lst3 = lst2;
	while (lst != NULL && lst->next != NULL)
	{
		lst2->next = f(lst->next);
		lst2 = lst2->next;
		lst = lst->next;
	}
	return (lst3);
}
