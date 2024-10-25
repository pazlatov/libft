/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 16:34:34 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:18:09 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *) s;
	while (n > 0)
	{
		*(p++) = (unsigned char) c;
		n--;
	}
	return (s);
}

// int  main()
// {
//  char str[] = "123456";
//  int len = sizeof(str);
//  printf("bfr: %s\n", str);
//  ft_memset(str, 97, len);
//  printf("aftr: %s\n", str);
//  char strr[] = "123456";
//  printf("bfr: %s\n", strr);
//  memset(strr, 97, len);
//  printf("aftr: %s\n", strr);
//  return (0);
// }