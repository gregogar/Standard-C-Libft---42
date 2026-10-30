/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:03:55 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:53:52 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub_cadena;
	size_t		i;
	size_t		s_length;

	i = 0;
	s_length = ft_strlen(s);
	if (start >= s_length)
		len = 0;
	else if (len > (s_length - start))
		len = (s_length - start);
	sub_cadena = malloc(((len) + 1) * sizeof(char));
	if (sub_cadena == NULL)
		return (NULL);
	while (i < len)
	{
		sub_cadena[i] = s[start];
		i++;
		start++;
	}
	sub_cadena[i] = '\0';
	return (sub_cadena);
}
