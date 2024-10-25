/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/14 16:10:55 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:10:06 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		dst_len = size;
	if (dst_len == size)
		return (size + src_len);
	if (src_len < size - dst_len)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	return (dst_len + src_len);
}

// int main()
// {
//  char src1[] = "12345";
//  char srcc[] = "12345";
//  char dest1[10] = "abc";
//  char destt[10] = "abc";
//  size_t  size = 17;
//  printf("len1 = %zu\n", ft_strlcat(dest1, src1, size));
//  printf("lenn = %zu\n", strlcat(destt, srcc, size));
//  printf("src1 = %s\n", src1);
//  printf("srcc = %s\n", srcc);
//  printf("dest1 = %s\n", dest1);
//  printf("destt = %s\n", destt);
// }