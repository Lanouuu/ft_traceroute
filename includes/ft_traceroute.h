#ifndef FT_TRACEROUTE
# define FT_TRACEROUTE

# include <stdio.h>

enum errors {
    MISS_HOST,

};

void    print_help(void);
int     dispatch_err(int e, char *s, int ret);

#endif