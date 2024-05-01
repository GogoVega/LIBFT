#include "../../include/libft.h"

int	main(void)
{
	ft_printf("\n%d - %d - %d - %d - %d - %d - %d",
		ft_printf(" %p ", (void *) -1),
		ft_printf(" %p ", (void *) 1),
		ft_printf(" %p ", (void *) 15),
		ft_printf(" %p ", (void *) 16),
		ft_printf(" %p ", (void *) 17),
		ft_printf(" %p %p ", (void *) MIN_INT, (void *) MAX_INT),
		ft_printf(" %p %p ", (void *) 0, (void *) 0)
	);
}
