/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:23:00 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/01 19:44:18 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*strcpy;
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	strcpy = malloc((len + 1) * sizeof(char));
	i = 0;
	if (strcpy == 0)
		return (0);
	while (i < len)
	{
		strcpy[i] = str[i];
		i++;
	}
	strcpy[i] = '\0';
	return (strcpy);
}
