/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbas <cbas@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 17:37:30 by cbas              #+#    #+#             */
/*   Updated: 2026/09/07 19:15:42 by cbas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*final;
	t_list	*list;
	t_list	*tmp;
	void	*f_tmp;

	final = NULL;
	list = lst;
	while (list)
	{
		f_tmp = f(list->content);
		if (!f_tmp)
			return (ft_lstclear(&final, del), NULL);
		tmp = ft_lstnew(f_tmp);
		if (!tmp)
		{
			del(f_tmp);
			ft_lstclear(&final, del);
			return (NULL);
		}
		ft_lstadd_back(&final, tmp);
		list = list->next;
	}
	return (final);
}
