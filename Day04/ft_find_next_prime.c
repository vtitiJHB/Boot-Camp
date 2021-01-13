int     ft_find_next_prime(int nb)
{
    int     i;

    i = 1;
    if(nb <= 2)
        return 2;
    while(++i < nb)
        {
            if(nb % i == 0)
                {
                    nb++;
                    i = 1;
                }
        }
    return nb;
}