/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 19:22:34 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:53:12 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s1l;
	size_t		s2l;
	size_t		i;
	char		*join;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	join = malloc((s1l + s2l +1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (i < s1l)
	{
		join[i] = s1[i];
		i++;
	}
	while (i < (s1l + s2l))
	{
		join[i] = s2[i - s1l];
		i++;
	}
	join[i] = '\0';
	return (join);
}
