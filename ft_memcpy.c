/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/10 11:27:52 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 22:21:32 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*des;
	const unsigned char	*sr;

	if (n == 0 || dest == src)
		return (dest);
	sr = (const unsigned char *)src;
	des = (unsigned char *)dest;
	while (n--)
		*des++ = *sr++;
	return (dest);
}

// int main()
// {
//  int n = 3;
//  char    src[] = "123456";
//  char    dest[n + 1];
//  for (int i = 0; i < n + 1; i++)
//      dest[i] = '\0';
//  ft_memcpy(dest, src, n);
//  printf("src: %s\n", src);
//  printf("dest: %s\n\n", dest);
//  char    srcc[] = "123456";
//  char    destt[n + 1];
//  for (int i = 0; i < n + 1; i++)
//      destt[i] = '\0';
//  memcpy(destt, srcc, n);
//  printf("srcc: %s\n", srcc);
//  printf("destt: %s\n\n", destt);
// }