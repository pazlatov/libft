/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/23 12:13:52 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 22:15:55 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;

	i = 0;
	dst = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	while (i < ft_strlen(s))
	{
		dst[i] = (f)(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// static char  to_upp(unsigned int index, char ch)
// {
//  if (ch >= 'a' && ch <= 'z' && index != 1337)
//  {
//      ch -= 32;
//  }
//  return (ch);
// }
// int main()
// {
//     char str[] = "hello world!";
//  char *result = ft_strmapi(str, to_upper);
//     if (result)
//  {
//      printf("new string: %s\n", result);
//      free(result);
//  }
//  else
//      printf("Oopsie");
//  return 0;
// }