/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:54:56 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:52:09 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	unsigned int	size;
	unsigned int	i;
	t_list			*actual;

	if (lst == NULL)
		return (NULL);
	size = ft_lstsize(lst);
	i = 0;
	actual = lst;
	while (i < size - 1)
	{
		i++;
		actual = actual->next;
	}
	return (actual);
}
