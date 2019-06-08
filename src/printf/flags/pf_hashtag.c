#include "ft_printf.h"

char	*pf_hashtag(char *format, va_list arg, t_pfflags *flags)
{
	(void)arg;
	flags->tags.hashtag = 1;
	return (format + 1);
}
