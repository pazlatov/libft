/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/09 14:41:31 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:11:52 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
		{
			return ((unsigned char)*s1 - (unsigned char)*s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
	{
		return ((unsigned char)*s1 - (unsigned char)*s2);
	}
	return (0);
}

// int main()
// {
//  char s1[] = "0022";
//  char s2[] = "003";
//  size_t  n = 6;
//  printf("%d\n", ft_strncmp(s1, s2, n));
//  printf("%d\n", strncmp(s1, s2, n));
// }