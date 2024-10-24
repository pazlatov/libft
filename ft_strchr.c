/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 16:58:05 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/24 17:37:14 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = c;
	while (*s != '\0')
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}
// #include <string.h>
// int main()
// {
//     const char *str = "hola";
//     char ch = 'p';
//     // char *result = ft_strchr(str, ch);
//     if(ft_strchr(str, ch))
//     {
//         printf("char: %c at %ld\n", ch, (ft_strchr(str, ch) - str));
//     }
//     else
//     {
//         printf("char: %c not found \n", ch);
//     }
//     return 0;
// }