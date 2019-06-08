#include "put.h"
#include "str.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_error(char *str)
{
	int	unused __attribute__((unused));

	unused = write(2, str, ft_strlen(str));
	exit(EXIT_FAILURE);
}
