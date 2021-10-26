#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../libft/libft.h"
# define NUMBER_OF_FLAGS 8
# define TYPES "cspdiuxX%"
# define FLAGS "-.# +"

enum {
	NEGATIVE_WIDTH,
	PRECISION,
	ALTERNATE_FORM,
	BLANK_PADDING,
	SIGNED,
	ZERO_PADDING,
	FIELD_WIDTH,
	PRECISION_WIDTH
} e_flags;

int		ft_printf(const char *format, ...);

char	*get_format_specifier(const char *format);
int		print_without_format(const char **format, char *format_specifier);
void	check_flags(const char **format, int *flags);
int		print_format(char format, va_list args, int *flags);
int		print_formated(const char **format, va_list args);

int		print_char(char c, int *flags);
int		print_string(char *string, int *flags, char format);
int		print_pointer(void *pointer, int *flags);
int		print_signed_decimal(int decimal, int *flags);
int		print_unsigned_decimal(int decimal, int *flags);
int		print_hexadecimal(int decimal, int *flags, char format);

char	*ft_itoa_hexadecimal(int n);

void	initialize_flags(int *flags);

#endif