/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/14 17:22:23 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:19:03 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	l;

	str = (unsigned char *) s;
	l = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == l)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
//  char str[] = "12345c";
//  printf("%p\n", str + 5);
//  printf("%p\n", ft_memchr(str, 'c', 7));
//  printf("%p\n", memchr(str, 'c', 7));
// }