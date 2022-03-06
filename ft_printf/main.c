#include  <stdio.h>
#include <unistd.h>
#include <stdarg.h>
void	ft_putnbr(int nb);
int ft_printf(const char *s, ...);

int main(void)
{
    int res1;
    int res2;

    res1 = ft_printf("Gogo\n");
    res2 = printf("Gogo\n");
    printf("ft_printf%d\nprintf%d\n", res1, res2);
    res1 = ft_printf("ft_Number %i\n", 42);
    res2 = printf("Number %i\n", 42);
    printf("ft_printf%d\nprintf%d\n", res1, res2);
    return(0);
}