/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:43:55 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:53:36 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *small, size_t l)
{
	size_t	i;
	size_t	j;

	if (small[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < l && big[i])
	{
		j = 0;
		while ((i + j < l) && big[i + j] && (big[i + j] == small[j]))
			j++;
		if (!small[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
