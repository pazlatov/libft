/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 16:34:10 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 22:12:02 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	dest = (char *) malloc((ft_strlen(s) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// int main()
// {
//  char str[] = "okrr";
//  char *ptr = ft_strdup(str);
//  if (ptr == NULL)
//  {
//      printf("Uh-oh..");
//      return 1;
//  }
//  printf("%p\n%p\n", str, ptr);
//  free(ptr);
//  printf("%s", ptr);
// }