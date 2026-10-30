/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 20:17:31 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:53:46 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	begining(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	return (i);
}

static int	ending(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_strrchr(set, s1[i]) != NULL)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		beg;
	int		end;
	int		max_len;

	if (!s1 || !set)
		return (NULL);
	beg = begining(s1, set);
	end = ending(s1, set);
	max_len = (end - beg) + 1;
	trim = ft_substr(s1, beg, max_len);
	if (trim == NULL)
		return (NULL);
	return (trim);
}
