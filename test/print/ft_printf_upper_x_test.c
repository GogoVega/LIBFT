#include "../../include/libft.h"

int	main(void)
{
	ft_printf("\n%d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d",
		ft_printf(" %X ", 0),
		ft_printf(" %X ", -1),
		ft_printf(" %X ", 1),
		ft_printf(" %X ", 9),
		ft_printf(" %X ", 10),
		ft_printf(" %X ", 11),
		ft_printf(" %X ", 15),
		ft_printf(" %X ", 16),
		ft_printf(" %X ", 17),
		ft_printf(" %X ", 99),
		ft_printf(" %X ", 100),
		ft_printf(" %X ", 101),
		ft_printf(" %X ", -9),
		ft_printf(" %X ", -10),
		ft_printf(" %X ", -11),
		ft_printf(" %X ", -14),
		ft_printf(" %X ", -15),
		ft_printf(" %X ", -16),
		ft_printf(" %X ", -99),
		ft_printf(" %X ", -100),
		ft_printf(" %X ", -101),
		ft_printf(" %X ", (unsigned int) MAX_INT),
		ft_printf(" %X ", (unsigned int) MIN_INT),
		ft_printf(" %X ", (unsigned int) 9223372036854775807LL),
		ft_printf(" %X %X %X %X", (unsigned int) MAX_INT, (unsigned int) MIN_INT, 0, -42)
	);
}
