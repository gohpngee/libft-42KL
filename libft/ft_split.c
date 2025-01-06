/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-18 09:55:25 by pngoh             #+#    #+#             */
/*   Updated: 2024-11-18 09:55:25 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
		{
			s++;
		}
	}
	return (count);
}

static void	malloc_fail(char **array, size_t i)
{
	while (--i)
		free(array[i]);
	free(array);
}

static char	**ft_copy(char **array, char const *s, char c)
{
	size_t	word_len;
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c) == NULL)
				word_len = ft_strlen((char *)s);
			else
				word_len = ft_strchr(s, c) - s;
			array[i] = ft_substr(s, 0, word_len);
			if (!array[i])
			{
				malloc_fail(array, i);
				return (NULL);
			}
			s += word_len;
			i++;
		}
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*pointer;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	pointer = (char *)s;
	array = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	if (ft_copy(array, pointer, c) == NULL)
		return (NULL);
	array[word_count(s, c)] = 0;
	return (array);
}
