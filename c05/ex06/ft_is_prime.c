#include <stdio.h>

int ft_is_prime(int nb)
{
    int i = 2;

    if (nb < 2)
        return (0);

    if (nb == 2)
        return (1);

    while (i * i <= nb)
    {
        if (nb % i == 0)
            return (0);
        
        i++;
    }

    return (1); 
}

int main(void)
{
	printf("%d\n", ft_is_prime(1));
}

/* 
int main(void)
{
    // Test cases
    int num1 = 7;
    int num2 = 14;
    int num3 = 23;

    // Check prime status and print results
    printf("%d is %s prime.\n", num1, ft_is_prime(num1) ? "" : "not");
    printf("%d is %s prime.\n", num2, ft_is_prime(num2) ? "" : "not");
    printf("%d is %s prime.\n", num3, ft_is_prime(num3) ? "" : "not");

    return 0;
}
*/