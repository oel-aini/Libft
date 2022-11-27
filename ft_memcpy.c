/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:32:53 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/28 00:14:35 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	char	*p;
	char	*d;

	p = (char *)src;
	d = (char *)dst;
	if (!p && !d)
		return (NULL);
	while (n)
	{
		*d = *p;
		p++;
		d++;
		n--;
	}
	return (dst);
}
