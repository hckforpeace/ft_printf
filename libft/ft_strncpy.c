/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierre <pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 00:24:12 by pierre            #+#    #+#             */
/*   Updated: 2024/05/02 14:53:04 by pierre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	*dest = '\0';
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (dest);
}
