/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/23 12:14:20 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:09:13 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void to_upper(unsigned int index, char *ch)
// {
//     if (*ch >= 'a' && *ch <= 'z' && index != 1337)
//         *ch -= 32;
// }
// int main()
// {
//     char str[] = "hello world!";
//     ft_striteri(str, to_upper);
//     printf("%s\n", str);
//     return 0;
// }