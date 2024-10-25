/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 18:58:21 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:15:16 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9')))
		return (0);
	return (1);
}

// int main()
// {
//     char c = 'Z';
//     printf("%d\n", ft_isalnum(c));
//  printf("%d\n", isalnum(c));
//     return 0;
// }