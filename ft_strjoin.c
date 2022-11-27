/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:00:51 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/28 00:29:00 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	nstr = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!nstr)
		return (NULL);
	while (s1[i])
	{
		nstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		nstr[i] = s2[j];
		j++;
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
