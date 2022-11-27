/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:45:26 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/01 12:22:45 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(nitems * size);
	if (str == 0)
		return (0);
	while (i < nitems * size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
