/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 19:19:20 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:17:56 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size == 0)
	{
		return (len);
	}
	while (src[i] != '\0' && i < size -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// int main()
// {
//  char src[] = "123456";
//  int len = sizeof(src);
//  char dest[len];
//  printf("len: %d, ", ft_strlcpy(dest, src, 572));
//  printf("dst: %s\n", dest);
//  char srcc[] = "123456";
//  int lenn = sizeof(srcc);
//  char destt[lenn];
//  printf("len: %d, ", strlcpy(destt, srcc, 572));
//  printf("dstt: %s\n", destt);
// }