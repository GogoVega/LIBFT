#include "../../include/libft.h"

int	main(void)
{
	ft_printf("\n%d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d",
		ft_printf(" %x ", 0),
		ft_printf(" %x ", -1),
		ft_printf(" %x ", 1),
		ft_printf(" %x ", 9),
		ft_printf(" %x ", 10),
		ft_printf(" %x ", 11),
		ft_printf(" %x ", 15),
		ft_printf(" %x ", 16),
		ft_printf(" %x ", 17),
		ft_printf(" %x ", 99),
		ft_printf(" %x ", 100),
		ft_printf(" %x ", 101),
		ft_printf(" %x ", -9),
		ft_printf(" %x ", -10),
		ft_printf(" %x ", -11),
		ft_printf(" %x ", -14),
		ft_printf(" %x ", -15),
		ft_printf(" %x ", -16),
		ft_printf(" %x ", -99),
		ft_printf(" %x ", -100),
		ft_printf(" %x ", -101),
		ft_printf(" %x ", (unsigned int) MAX_INT),
		ft_printf(" %x ", (unsigned int) MIN_INT),
		ft_printf(" %x ", (unsigned int) 9223372036854775807LL),
		ft_printf(" %x %x %x %x", (unsigned int) MAX_INT, (unsigned int) MIN_INT, 0, -42)
	);
}
