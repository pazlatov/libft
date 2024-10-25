/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/23 12:39:43 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 22:19:02 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	match_making(char c, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set || !*set)
		return (ft_strdup(s1));
	while (s1[start] && match_making(s1[start], set))
		start++;
	while (end > start && match_making(s1[end - 1], set))
		end--;
	if (start == end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start));
}

int	match_making(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

// int main()
// {
//     char s1[] = "";
//     char set[] = "";
//     char *ptr = ft_strtrim(s1, set);
//     if (ptr)
//     {
//         printf("%s", ptr);
//         free (ptr);
//     }
//     else
//         return 0;
//}