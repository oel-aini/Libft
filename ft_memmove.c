/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:35:02 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/28 00:16:46 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*pd;
	char	*ps;
	int		i;

	pd = (char *)dst;
	ps = (char *)src;
	i = len - 1;
	if (!ps && !pd)
		return (NULL);
	if (ps > pd)
	{
		ft_memcpy(pd, ps, len);
	}
	else
	{
		while (i >= 0)
		{
			pd[i] = ps[i];
			i--;
		}
	}
	return (dst);
}
