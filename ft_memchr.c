/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 12:46:18 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/12 17:35:56 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		cc;
	const unsigned char	*s;

	s = (const unsigned char *)src;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s[i] == cc)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
