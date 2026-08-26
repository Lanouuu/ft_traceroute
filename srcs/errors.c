#include "ft_traceroute.h"

int dispatch_err(int e, char *s, int ret) {
    (void)s;
    (void)ret;
    if (e == MISS_HOST) {
        if (e == MISS_HOST)
            fprintf(stderr, "ft_ping: missing host operand\n\n");
        print_help();
    }
    return (1);
}