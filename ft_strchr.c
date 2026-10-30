/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:48:17 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:52:54 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	size_t			i;
	unsigned char	target;

	i = 0;
	target = (unsigned char)c;
	while (str[i] != '\0')
	{
		if ((unsigned char)str[i] == target)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == target)
		return ((char *)&str[i]);
	return (NULL);
}
