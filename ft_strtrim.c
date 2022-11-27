/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:02:33 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/28 00:00:35 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	c_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*p;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = 0;
	while (c_in_set(s1[start], set))
		start++;
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	end = ft_strlen(s1);
	while (c_in_set(s1[end - 1], set) == 1)
		end--;
	p = ft_substr(s1, start, end - start);
	return (p);
}
