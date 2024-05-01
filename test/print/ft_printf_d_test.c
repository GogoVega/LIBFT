#include "../../include/libft.h"

int	main(void)
{
	ft_printf("\n%d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d - %d",
		ft_printf(" %d ", 0),
		ft_printf(" %d ", -1),
		ft_printf(" %d ", 1),
		ft_printf(" %d ", 9),
		ft_printf(" %d ", 10),
		ft_printf(" %d ", 11),
		ft_printf(" %d ", 15),
		ft_printf(" %d ", 16),
		ft_printf(" %d ", 17),
		ft_printf(" %d ", 99),
		ft_printf(" %d ", 100),
		ft_printf(" %d ", 101),
		ft_printf(" %d ", -9),
		ft_printf(" %d ", -10),
		ft_printf(" %d ", -11),
		ft_printf(" %d ", -14),
		ft_printf(" %d ", -15),
		ft_printf(" %d ", -16),
		ft_printf(" %d ", -99),
		ft_printf(" %d ", -100),
		ft_printf(" %d ", -101),
		ft_printf(" %d ", (int) MAX_INT),
		ft_printf(" %d ", (int) MIN_INT),
		ft_printf(" %d ", (int) 9223372036854775807LL),
		ft_printf(" %d %d %d %d", (int) MAX_INT, (int) MIN_INT, 0, -42)
	);
}
