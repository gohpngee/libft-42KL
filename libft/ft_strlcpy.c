/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 10:32:50 by pngoh             #+#    #+#             */
/*   Updated: 2024-11-05 10:32:50 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;
	size_t	copy_len;

	src_len = ft_strlen((char *)src);
	i = 0;
	if (size != 0)
	{
		if (src_len >= size)
			copy_len = size -1;
		else
			copy_len = src_len;
		while (i < copy_len)
		{
			dest[i] = src[i];
			i++;
		}
		dest[copy_len] = '\0';
	}
	return (src_len);
}
