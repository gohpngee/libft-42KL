/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 07:53:41 by pngoh             #+#    #+#             */
/*   Updated: 2024-11-14 07:53:41 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*ptr == (unsigned char) c)
			return ((void *)ptr);
		ptr++;
	}
	return (0);
}
