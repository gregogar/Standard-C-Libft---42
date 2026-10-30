/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grgarcia <grgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:12:15 by grgarcia          #+#    #+#             */
/*   Updated: 2026/10/30 14:51:15 by grgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_n_length(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		flag;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = ft_n_length(n);
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	flag = 0;
	if (n < 0)
	{
		n = n *(-1);
		str[0] = '-';
		flag = 1;
	}
	while (size > flag)
	{
		size--;
		str[size] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
