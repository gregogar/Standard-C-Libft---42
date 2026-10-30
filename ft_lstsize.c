/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:49:54 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:52:21 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;
	t_list			*actual;

	if (lst == NULL)
		return (0);
	actual = lst;
	i = 0;
	while (actual != NULL)
	{
		i++;
		actual = actual->next;
	}
	return (i);
}
