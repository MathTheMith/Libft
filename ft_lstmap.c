/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvachon <mvachon@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:16:54 by mvachon           #+#    #+#             */
/*   Updated: 2024/11/16 13:37:14 by mvachon          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_element;
	void	*new_content;

	new = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		new_element = ft_lstnew(new_content);
		if (!new_element)
		{
			ft_lstclear(&new, del);
			del(new_content);
			return (NULL);
		}
		ft_lstadd_back(&new, new_element);
		lst = lst->next;
	}
	return (new);
}
