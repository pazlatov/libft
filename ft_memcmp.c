/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/14 20:16:04 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/24 17:18:00 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*st1;
	const char	*st2;
	size_t		i;

	if (n == 0)
		return (0);
	st1 = (const char *)s1;
	st2 = (const char *)s2;
	i = 0;
	while ((i < n - 1) && st1[i] == st2[i])
		i++;
	return ((unsigned char)st1[i] - (unsigned char)st2[i]);
}
