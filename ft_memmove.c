/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/10 12:30:29 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:18:37 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*sr;
	size_t		i;

	if (src == dest)
		return (dest);
	dst = (char *)dest;
	sr = (const char *)src;
	if (sr < dst && sr + n > dst)
	{
		while (n--)
			dst[n] = sr[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = sr[i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {
//  char    src1[] = "123456";
//  char    src2[] = "123456";
//  printf("\nsrc1: %s\n", src1);
//  printf("src2: %s\n", src2);
//  ft_memmove(src1, src1 + 2, 1);
//  printf("\nsrc1: %s\n", src1);
//  memmove(src2, src2 + 2, 1);
//  printf("src2: %s\n", src2);
// }