/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 17:11:42 by emlicame      #+#    #+#                 */
/*   Updated: 2022/03/09 19:37:17 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	res1;
	int	res2;

	// res1 = ft_printf("ft_Gogo\n");
	// res2 = printf("Gogo\n");
	// printf("ft_printf%d\nprintf%d\n", res1, res2);
	// res1 = ft_printf("1Number %i\n", 0);
	// res2 = printf("2Number %i\n", 0);
	// printf("ft_printf%d\nprintf%d\n", res1, res2);
	// res1 = ft_printf("1str %s\n", "Gogo");
	// res2 = printf("2str %s\n", "Gogo");
	// printf("ft_printf%d\nprintf%d\n", res1, res2);
	// res1 = ft_printf("1char %c\n", 'Y');
	// res2 = printf("2char %c\n", 'Y');
	// printf("ft_printf%d\nprintf%d\n", res1, res2);
	res1 = ft_printf("1hexa %x\n", 1977);
	res2 = printf("2hexa %x\n", 1977);
	printf("ft_printf%d\nprintf%d\n", res1, res2);
	res1 = ft_printf("1HEXA %X\n", 1977);
	res2 = printf("2HEXA %X\n", 1977);
	printf("ft_printf%d\nprintf%d\n", res1, res2);
	return (0);
}
