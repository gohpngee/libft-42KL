/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-15 09:09:43 by pngoh             #+#    #+#             */
/*   Updated: 2024-11-15 09:09:43 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	size_t	len_s1;
	size_t	len_s2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	final = (char *)malloc(len_s1 + len_s2 + 1);
	if (final == NULL)
		return (NULL);
	ft_memcpy(final, s1, len_s1);
	ft_memcpy(final + len_s1, s2, len_s2);
	final[len_s1 + len_s2] = 0;
	return (final);
}
