/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:53:49 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/01 20:59:18 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	if (!s)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s) && s[start + i])
		i++;
	j = 0;
	sub = malloc((i + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (j < i && start < ft_strlen(s))
	{
		sub[j] = s[start + j];
		j++;
	}
	sub[i] = '\0';
	return (sub);
}
