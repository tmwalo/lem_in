#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(void)
{
	int	fd;
	
	fd = open("ft_putnbr_fd_test_file.txt",O_WRONLY | O_CREAT | O_APPEND,S_IRWXU);
	if (fd == (-1))
		return (0);
	ft_putendl("Call ft_putnbr_fd() with n = 13: ");
	ft_putnbr_fd(13, fd);
	ft_putstr_fd("\n", fd);
	ft_putendl("Call ft_putnbr_fd() with n = -237: ");
	ft_putnbr_fd(-237, fd);
	ft_putstr_fd("\n", fd);
	ft_putendl("Call ft_putnbr_fd() with n = 18 865 999: ");
	ft_putnbr_fd(18865999, fd);
	ft_putstr_fd("\n", fd);
	ft_putendl("Call ft_putnbr_fd() with n = -33 767 908: ");
	ft_putnbr_fd(-33767908, fd);
	ft_putstr_fd("\n", fd);
	ft_putendl("Call ft_putnbr_fd() with n = 0: ");
	ft_putnbr_fd(0, fd);
	ft_putstr_fd("\n", fd);
	ft_putendl("Call ft_putnbr_fd() with n = -2 147 483 648: ");
	ft_putnbr_fd(-2147483648, fd);
	ft_putstr_fd("\n", fd);
	close(fd);
	ft_putendl("Check text file.");
	return (0);
}
