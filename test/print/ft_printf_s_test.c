#include "../../include/libft.h"

int	main(void)
{
	char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";

	ft_printf("\n%d - %d - %d - %d - %d - %d - %d - %d - %d - %d",
	ft_printf("%s", ""),
	ft_printf(" %s", ""),
	ft_printf("%s ", ""),
	ft_printf(" %s ", ""),
	ft_printf(" %s ", "-"),
	ft_printf(" %s %s ", "", "-"),
	ft_printf(" %s %s ", " - ", ""),
	ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2),
	ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 "),
	ft_printf(" NULL %s NULL ", (char *) NULL)
	);
}
