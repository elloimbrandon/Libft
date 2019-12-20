#include "libft.h"

void	ft_free_2d(char **str)
{
	int i;

    i = 0;
    if (!*str || !str)
        return ;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	str = NULL;
}