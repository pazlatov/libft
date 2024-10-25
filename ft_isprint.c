/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 15:05:55 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:16:18 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}

// int main()
// {
//     char c = '1';
//     printf("%d\n", ft_isprint(c));
//  printf("%d\n", isprint(c));
//     return 0;
// }