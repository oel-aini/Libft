/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:13:41 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/28 00:32:37 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;

	slen = ft_strlen(src);
	if (dstsize == 0)
	{
		return (slen);
	}
	i = 0;
	while (src[i] && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (slen);
}
