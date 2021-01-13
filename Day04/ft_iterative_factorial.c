int     ft_iterative_factorial(int nb)
{
    int     i;
    int     factorial;

    i = 1;
    factorial = 1;
    while(i <= nb)
        factorial = factorial * i++;
    if(nb < 0 || nb > 12)
        return 0;
    if(nb == 0 || nb == 1)
        return 1;
    return factorial;
}
