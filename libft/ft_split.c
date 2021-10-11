#include "libft.h"

void ft_fill(char *elem, char const *s, int    i, int lenn)
{
    int j;
    int k;

    j = i - lenn;
    if (s[i] == 0)
      j++;
    k = 0;
    while (j < i && s[j] != 0)
    {
        
        elem[k] = s[j];
        k++;
        j++;
    }
    elem[k] = 0;
}
int    count(const char *s, char c)
{
    int    n;
    int i;

    n = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            n++;
        i++;
    }
    if (s[0] == c)
      n--;
    if (s[ft_strlen(s) - 1] == c)
      n--;
    return (n);
}
int    max_str(const char *s, char c)
{
    int maxx;
    int    i;
    int    j;

    maxx = 0;
    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            if (j > maxx)
                maxx = j;
            j = 0;
        }
        i++;
        j++;
    }
    if (j > maxx)
        maxx = j;
    return (maxx);
}
char **ft_split(char const *s, char c)
{
    int    i;
    int    j;
    int cur_count;
    int cur_max;
    int    lenn;
    char    **matr;
    char    *elem;

    i = 0;
    j = 0;
    cur_count = count(s,c);
    cur_max = max_str(s,c);
    lenn = 0;
    matr = (char **)malloc((cur_count + 2) * sizeof(char *));
    if (!matr)
    return matr;
    while (i < cur_count + 2)
    {
        matr[i] = (char *)malloc(cur_max + 1);
        if (!matr[i])
            return (0);
        i++;
    }
    i = 0;
    while (s[i])
    {
        if (s[i] == c && lenn != 0)
        {
            ft_fill(matr[j], s, i, lenn - 1);
            j++;
            lenn = 0;
        }
        else if (s[i] == c)
          lenn = 0;
        lenn++;
        i++;
    }
    if (s[i - 1] != c)
    {
      ft_fill(matr[j], s, i, lenn);
      j++;
    }
    matr[j] = 0;
    return (matr);
}