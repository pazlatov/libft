/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pzlatov <pzlatov@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/23 12:50:24 by pzlatov       #+#    #+#                 */
/*   Updated: 2024/10/25 20:20:40 by pzlatov       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digit(long nbr);
static void		fill_string(char *nstr, long nbr, size_t len, int is_negative);

char	*ft_itoa(int n)
{
	long	nbr;
	char	*nstr;
	size_t	len;
	int		is_negative;

	is_negative = 0;
	nbr = n;
	if (nbr < 0)
	{
		is_negative = 1;
		nbr = -nbr;
	}
	len = count_digit(nbr) + is_negative;
	nstr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!nstr)
	{
		return (NULL);
	}
	fill_string(nstr, nbr, len, is_negative);
	return (nstr);
}

static size_t	count_digit(long nbr)
{
	size_t	count;

	count = 0;
	if (nbr == 0)
		count ++;
	while (nbr > 0)
	{
		count++;
		nbr = nbr / 10;
	}
	return (count);
}

static void	fill_string(char *nstr, long nbr, size_t len, int is_negative)
{
	size_t	i;

	i = len - 1;
	if (nbr == 0)
	{
		nstr[0] = '0';
		nstr[1] = '\0';
	}
	if (is_negative)
	{
		nstr[0] = '-';
	}
	while (nbr > 0)
	{
		nstr[i] = '0' + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
}

// int main()
// {
//  printf("%s", ft_itoa(-2147483648));
// }