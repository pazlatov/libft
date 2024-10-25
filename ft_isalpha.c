/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 18:22:38 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:15:32 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')))
		return (0);
	return (1);
}

// int main()
// {
//     char c = 'a';
//     printf("%d\n", ft_isalpha(c));
//  printf("%d\n", isalpha(c));
//     return 0;
// }