/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 19:38:49 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:53:42 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	size_t		s_l;
	char		cc;

	s_l = ft_strlen(s);
	i = s_l;
	cc = (char)c;
	if (cc == '\0')
		return ((char *)&s[i]);
	while (i > 0)
	{
		i--;
		if (s[i] == cc)
			return ((char *)&s[i]);
	}
	return (NULL);
}
