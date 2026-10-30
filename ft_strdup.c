/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:36:32 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:52:58 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*s2;
	size_t		s2_l;
	size_t		i;

	s2_l = ft_strlen(s);
	s2 = malloc((s2_l + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (i < s2_l)
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
