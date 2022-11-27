/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 20:09:45 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/27 23:58:51 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	leni(long n)
{
	int	j;

	j = 0;
	if (n < 0)
	{
		n *= -1;
		j++;
	}
	while (n > 0)
	{
		n = n / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	long	x;
	int		lenght;
	char	*str;

	x = n;
	if (n == 0)
		return (ft_strdup("0"));
	lenght = leni(x);
	str = (char *) malloc((lenght + 1) * sizeof(char));
	if (!str)
		return (0);
	if (x < 0)
	{
			x = x * -1;
			str[0] = '-';
	}
	str[lenght] = '\0';
	while (x > 0)
	{
		str[lenght - 1] = x % 10 +48;
		x = x / 10;
		lenght--;
	}
	return (str);
}
