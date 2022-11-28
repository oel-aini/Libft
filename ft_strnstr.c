/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:29:12 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/28 01:11:49 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *bigg, const char *littleee, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!bigg && !len)
		return (NULL);
	if (!littleee[0])
		return ((char *)bigg);
	while (bigg[i] && i < len)
	{
		j = 0;
		while (bigg[i + j] && littleee[j]
			&& bigg[i + j] == littleee[j] && i + j < len)
			j++;
		if (!littleee[j])
			return ((char *)(bigg + i));
	i++;
	}
	return (NULL);
}
