/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/16 13:03:34 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:14:52 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	temp = malloc (nmemb * size);
	if (!temp)
		return (NULL);
	while (i < nmemb * size)
		temp[i++] = 0;
	return (temp);
}

// int main()
// {
//     size_t num = 5;
//     size_t size = sizeof(int);
//     int *arr = (int *)ft_calloc(num, size);
//     if (arr == NULL)
//  {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     printf("Array elements after ft_calloc:\n");
//     for (size_t i = 0; i < num; i++)
//         printf("arr[%zu] = %d\n", i, arr[i]);
//     free(arr);
//     return 0;
// }