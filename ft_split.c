/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:29:55 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:52:47 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_w(char const *s, char c)
{
	int	i;
	int	result;
	int	found_flag;

	i = 0;
	result = 0;
	found_flag = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			found_flag = 0;
		else
		{
			if (found_flag == 0)
			{
				result++;
				found_flag = 1;
			}
		}
		i++;
	}
	return (result);
}

static char	**free_all(char **m, int nbr_str)
{
	int	i;

	i = 0;
	while (i < nbr_str)
	{
		free(m[i]);
		i++;
	}
	free(m);
	return (NULL);
}

static int	fs(char **m, char const *s, unsigned int s_index, size_t wrd_l)
{
	int	state;

	state = 0;
	if (wrd_l > 0)
	{
		m[0] = ft_substr(s, s_index - wrd_l, wrd_l);
		if (m[0] == NULL)
			return (0);
		state = 1;
	}
	if (state == 1)
		m[1] = NULL;
	else
		m[0] = NULL;
	return (1);
}

static char	**process_split(char **m, char const *s, char c, int i)
{
	unsigned int	s_index;
	size_t			wrd_l;

	s_index = 0;
	wrd_l = 0;
	while (s[s_index] != '\0')
	{
		if (s_index != 0)
		{
			if (s[s_index] == c && s[s_index - 1] != c)
			{
				m[i] = ft_substr(s, (s_index - wrd_l), (wrd_l));
				if (m[i] == NULL)
					return (free_all(m, i));
				wrd_l = 0;
				i++;
			}
		}
		if (s[s_index] != c)
			wrd_l++;
		s_index++;
	}
	if (fs(&m[i], s, s_index, wrd_l) == 0)
		return (free_all(m, i));
	return (m);
}

char	**ft_split(char const *s, char c)
{
	char	**matriz;
	int		nbr_words;

	nbr_words = count_w(s, c);
	matriz = (char **)malloc((nbr_words + 1) * sizeof(char *));
	if (matriz == NULL)
		return (NULL);
	matriz = process_split(matriz, s, c, 0);
	return (matriz);
}
