/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:51:13 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/28 00:18:21 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*new_dest;
	unsigned char	src;
	size_t			i;

	new_dest = dest;
	src = c;
	i = 0;
	while (i++ < n)
		*new_dest++ = src;
	return (dest);
}