/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:58:18 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/28 00:48:17 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *p, int n)
{
	int	i;

	i = ft_strlen(p);
	while (i >= 0)
	{
		if (p[i] == (char)n)
			return ((char *)p + i);
		i--;
	}
	return (0);
}
