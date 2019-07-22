#include "libft.h"

int     ft_ismod(int c)
{
    if(c == 'l' || c == 'h' || c == 'j' || c == 'z')
        return(1);
    else
        return(0);
}
