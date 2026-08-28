#ifndef FT_TRACEROUTE
# define FT_TRACEROUTE

# include <stdio.h>
# include <string.h>

enum errors {
    BAD_OPT,
};

typedef struct s_traceroute {
    char    *hostname;
} t_traceroute;


void    print_help(void);
int     dispatch_err(int e, char *s, int ret);

int     parser(char **av, t_traceroute *data);

#endif