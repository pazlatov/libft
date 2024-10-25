/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 13:51:40 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:15:47 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}

// int main()
// {
//     char c = 127;
//     printf("%d\n", ft_isascii(c));
//  printf("%d\n", isascii(c));
//     return 0;
// }