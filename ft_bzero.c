/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/09 15:39:33 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:18:28 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;

	a = (unsigned char *)s;
	while (n != 0)
	{
		*a = '\0';
		a++;
		n--;
	}
}

// int  main()
// {
//  char str[] = "123456";
//  int len = 3;
//  printf("bfr: %s\n", str);
//  ft_bzero(str, len);
//  printf("aftr: %s\n", str);
//  char strr[] = "123456";
//  printf("bfr: %s\n", strr);
//  bzero(strr, len);
//  printf("aftr: %s\n", strr);
//  return (0);
// }