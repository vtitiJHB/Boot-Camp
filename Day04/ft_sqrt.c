int     ft_sqrt(int nb)
{
    int     i;

    i = 1;
    if(nb == 0 || nb == 1)
        return nb;
    while(i++ <= nb / 2)
        {
            if(i * i == nb)
                return i;
        }
    return 0;
}