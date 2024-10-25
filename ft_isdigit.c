/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 18:43:40 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:16:02 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	return (1);
}

// int main()
// {
//     char c = '3';
//     printf("%d\n", ft_isdigit(c));
//  printf("%d\n", isdigit(c));
//     return 0;
// }