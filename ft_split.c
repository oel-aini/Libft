/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-aini <oel-aini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:31:13 by oel-aini          #+#    #+#             */
/*   Updated: 2022/11/28 00:00:03 by oel-aini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wrd_num(char *s, char c)
{
	int	a ;
	int	i ;

	a = 0 ;
	i = 0 ;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] && s[i] != c)
			a += 1;
		while (s[i] != c && s[i])
			i++;
	}
	return (a);
}

static int	len_word(char *s, char c, int i)
{
	int	a;

	a = i;
	while (s[i] != c && s[i])
		i++;
	return (i - a);
}

static void	*ft_free(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static char	**ft_alloc(char **str, char *s, char c, int a)
{
	int	i ;
	int	b ;
	int	j ;

	i = 0 ;
	j = 0 ;
	b = 0 ;
	while (s[j])
	{
		while (s[j] == c && s[j])
			j++;
		b = len_word((char *)s, c, j);
		if (i < a)
		{
			str[i] = ft_substr(s, j, b);
			if (!str[i])
				return (ft_free(str, i));
			i++;
		}
		j += b;
	}
	str[i] = (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		a;

	if (!s)
		return (NULL);
	a = wrd_num((char *)s, c);
	str = (char **) malloc((a + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str = ft_alloc(str, (char *)s, c, a);
	return (str);
}
