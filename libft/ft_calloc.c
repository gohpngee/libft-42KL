/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 10:35:13 by pngoh             #+#    #+#             */
/*   Updated: 2024-11-14 10:35:13 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	if (nmemb > __SIZE_MAX__ / size)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == 0)
		return (0);
	ft_memset(ptr, 0, (int)total_size);
	return (ptr);
}
