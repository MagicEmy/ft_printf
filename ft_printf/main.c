/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 17:11:42 by emlicame      #+#    #+#                 */
/*   Updated: 2022/03/10 16:00:33 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	res1;
	int	res2;
	int	*ptr;
	int	num;

	num = 42;
	ptr = &num;
	res1 = ft_printf("Gogo\n");
	res2 = printf("Gogo\n");
	printf("ft_printf%d\nprintf%d\n", res1, res2);
	res1 = ft_printf("1Number %i\n", 42);
	res2 = printf("2Number %i\n", 42);
	printf("ft_printf%d\nprintf%d\n", res1, res2);
	res1 = ft_printf("1str %s\n", "Gogo");
	res2 = printf("2str %s\n", "Gogo");
	printf("ft_printf%d\nprintf%d\n", res1, res2);
	res1 = ft_printf("1char %c\n", 'Y');
	res2 = printf("2char %c\n", 'Y');
	printf("ft_printf%d\nprintf%d\n", res1, res2);
	res1 = ft_printf("1hexa %x\n", 1977);
	res2 = printf("2hexa %x\n", 1977);
	printf("ft_printf%d\nprintf%d\n", res1, res2);
	res1 = ft_printf("1HEXA %X\n", 1977101120);
	res2 = printf("2HEXA %X\n", 1977101120);
	printf("ft_printf%d\nprintf%d\n", res1, res2);
	res1 = ft_printf("1ptr %p\n", ptr);
	res2 = printf("2ptr %p\n", ptr);
	printf("ft_printf%d\nprintf%d\n", res1, res2);
	return (0);
}
