/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-11 07:43:47 by pngoh             #+#    #+#             */
/*   Updated: 2024-11-11 07:43:47 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	if (size == 0)
		return (ft_strlen((char *)src));
	i = 0;
	src_len = ft_strlen((char *)src);
	dest_len = ft_strlen(dest);
	if (dest_len >= size)
	{
		return (size + src_len);
	}
	while ((dest_len + i + 1 < size) && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
