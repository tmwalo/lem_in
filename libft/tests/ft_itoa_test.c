#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("Call ft_itoa() with n = 187, string: %s\n", ft_itoa(187));
	printf("Call ft_itoa() with n = -3783, string: %s\n", ft_itoa(-3783));
	printf("Call ft_itoa() with n = 11 327 509, string: %s\n", ft_itoa(11327509));
	printf("Call ft_itoa() with n = -70 233 854, string: %s\n", ft_itoa(-70233854));
	printf("Call ft_itoa() with n = 0, string: %s\n", ft_itoa(0));
	printf("Call ft_itoa() with n = -2 147 483 648, string: %s\n", ft_itoa(-2147483648));
	return (0);
}
