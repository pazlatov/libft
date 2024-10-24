/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/10 11:27:52 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/24 17:18:19 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*des;
	const unsigned char	*sr;

	if (!dest && !src && n > 0)
		return (NULL);
	sr = (const unsigned char *)src;
	des = (unsigned char *)dest;
	while (n--)
		*des++ = *sr++;
	return (dest);
}
