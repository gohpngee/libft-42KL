/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 12:02:22 by pngoh             #+#    #+#             */
/*   Updated: 2024-11-14 12:02:22 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*final;

	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (start >= s_len)
	{
		final = (char *)malloc(1);
		if (final == NULL)
			return (NULL);
		ft_memset(final, 0, 1);
		return (final);
	}
	if (len > s_len - start)
		len = s_len - start;
	s += start;
	final = malloc(len + 1);
	if (final == NULL)
		return (NULL);
	ft_memcpy(final, s, len);
	final[len] = 0;
	return (final);
}
