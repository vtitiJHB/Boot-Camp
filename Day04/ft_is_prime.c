
int     ft_is_prime(int nb)
{
    int     i;

    i = 1;
    if(nb < 2)
        return 0;
    while(++i < nb)
        {
            if(nb % i == 0)
                return 0;
        }
    return 1;
}
