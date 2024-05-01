#include "../../include/libft.h"

int	main(void)
{
	ft_printf("\n%d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d",
		ft_printf(" %u ", 0),
		ft_printf(" %u ", -1),
		ft_printf(" %u ", 1),
		ft_printf(" %u ", 9),
		ft_printf(" %u ", 10),
		ft_printf(" %u ", 11),
		ft_printf(" %u ", 15),
		ft_printf(" %u ", 16),
		ft_printf(" %u ", 17),
		ft_printf(" %u ", 99),
		ft_printf(" %u ", 100),
		ft_printf(" %u ", 101),
		ft_printf(" %u ", -9),
		ft_printf(" %u ", -10),
		ft_printf(" %u ", -11),
		ft_printf(" %u ", -14),
		ft_printf(" %u ", -15),
		ft_printf(" %u ", -16),
		ft_printf(" %u ", -99),
		ft_printf(" %u ", -100),
		ft_printf(" %u ", -101),
		ft_printf(" %u ", (int) MAX_INT),
		ft_printf(" %u ", (int) MIN_INT),
		ft_printf(" %u ", (int) 9223372036854775807LL),
		ft_printf(" %u %u %u %u", (int) MAX_INT, (int) MIN_INT, 0, -42)
	);
}
