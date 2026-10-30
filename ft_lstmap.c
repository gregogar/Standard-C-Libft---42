/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:30:50 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:52:13 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	del(void *c)
// {
// 	free(c);
// }

// static void	*f(void *c)
// {
// 	int	*t;

// 	t = (int *)c;
// 	*t = *t * 2;
// 	return ((void *)t);
// }
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*actual;
	t_list	*rewind;
	void	*c;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	rewind = NULL;
	while (lst != NULL)
	{
		c = f(lst->content);
		actual = ft_lstnew(c);
		if (!actual)
		{
			ft_lstclear(&actual, del);
			free(c);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&rewind, actual);
	}
	return (rewind);
}
