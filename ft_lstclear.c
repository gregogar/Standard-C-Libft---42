/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 09:59:53 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:51:31 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*f;

	if (lst == NULL)
		return ;
	if (*lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		del((*lst)->content);
		f = *lst;
		*lst = (*lst)->next;
		free(f);
	}
}
