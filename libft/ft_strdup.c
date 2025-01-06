/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pngoh <pngoh@student.42.fr>                #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 10:28:13 by pngoh             #+#    #+#             */
/*   Updated: 2024-11-14 10:28:13 by pngoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	int		length;
	int		i;
	char	*dup;

	length = ft_strlen(s);
	dup = (char *)malloc((length + 1) * sizeof(char));
	i = 0;
	if (!dup)
		return (0);
	while (i < length)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
