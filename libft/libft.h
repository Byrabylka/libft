#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int 	ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *dest, int ch, size_t count);
void	ft_bzero(void *dest, size_t count);
void	*ft_memcpy(void *dest, const void *src, size_t count);
size_t	ft_strlcpy(char *dst, const char *src, size_t count);
size_t	ft_strlcat(char *dst, const char *src, size_t count);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strchr(const char *str, int ch);
int		ft_strncmp( const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *arr, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t count);

#endif
