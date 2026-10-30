/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 14:49:51 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/12 17:35:28 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*src1;
	const unsigned char	*src2;

	src1 = (const unsigned char *)s1;
	src2 = (const unsigned char *)s2;
	i = 0;
	while (i < n && (src1[i] == src2[i]))
		i++;
	if (i == n)
		return (0);
	return ((int)(src1[i] - src2[i]));
}
