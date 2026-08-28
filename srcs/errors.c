#include "ft_traceroute.h"

int dispatch_err(int e, char *s, int ret) {
    (void)ret;
    if (e == BAD_OPT)
        fprintf(stderr, "Bad option '%s' (argc 1)\n", s);
    return (1);
}
