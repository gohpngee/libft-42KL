/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 09:32:39 by pngoh             #+#    #+#             */
/*   Updated: 2024-11-14 09:32:39 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*haystack;
	const char	*needle;
	size_t		i;

	if (*little == 0)
		return ((char *)big);
	else if (!big && !len)
		return (0);
	while (*big && len)
	{
		haystack = big;
		needle = little;
		i = len;
		while (*haystack && *needle && i && *haystack == *needle)
		{
			haystack++;
			needle++;
			i--;
		}
		if (*needle == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
