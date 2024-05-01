#include "../../include/libft.h"

int	main(void)
{
	ft_printf("\n%d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d",
		ft_printf(" %i ", 0),
		ft_printf(" %i ", -1),
		ft_printf(" %i ", 1),
		ft_printf(" %i ", 9),
		ft_printf(" %i ", 10),
		ft_printf(" %i ", 11),
		ft_printf(" %i ", 15),
		ft_printf(" %i ", 16),
		ft_printf(" %i ", 17),
		ft_printf(" %i ", 99),
		ft_printf(" %i ", 100),
		ft_printf(" %i ", 101),
		ft_printf(" %i ", -9),
		ft_printf(" %i ", -10),
		ft_printf(" %i ", -11),
		ft_printf(" %i ", -14),
		ft_printf(" %i ", -15),
		ft_printf(" %i ", -16),
		ft_printf(" %i ", -99),
		ft_printf(" %i ", -100),
		ft_printf(" %i ", -101),
		ft_printf(" %i ", (int) MAX_INT),
		ft_printf(" %i ", (int) MIN_INT),
		ft_printf(" %i ", (int) 9223372036854775807LL),
		ft_printf(" %i %i %i %i", (int) MAX_INT, (int) MIN_INT, 0, -42)
	);
}
