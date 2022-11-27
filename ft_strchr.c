/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:24:09 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/28 00:24:18 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *p, int c)
{
	unsigned char	bc;

	bc = (unsigned char)c;
	while (*p && *p != bc)
	p++;
	if (*p == bc)
		return ((char *)p);
	else
		return (0);
}
