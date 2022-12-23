/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaguana <bcaguana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:47:08 by bcaguana          #+#    #+#             */
/*   Updated: 2022/12/10 13:49:25 by bcaguana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cont(const char *str, char c)
{
	int	i;
	int	n_words;
	int	flag;

	i = 0;
	n_words = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && flag == 0)
		{
			flag = 1;
			n_words++;
		}
		else if (str[i] == c)
			flag = 0;
		i++;
	}
	return (n_words);
}

static char	**ft_freemem(char **matrix)
{
	size_t	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	size_t	i;
	int		j;
	int		n_words;

	n_words = ft_cont(s, c);
	words = ft_calloc(n_words + 1, sizeof (char *));
	if (!words || !s)
		return (0);
	i = 0;
	j = 0;
	while (j < n_words)
	{
		i = 0;
		while (*s == c)
			s++;
		while (s[i] != c && s[i])
			i++;
		words[j] = ft_substr(s, 0, i);
		s = s + i;
		if (words[j++] == 0)
			return (ft_freemem(words));
	}
	return (words);
}
