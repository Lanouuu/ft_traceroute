#include "ft_traceroute.h"

static int  check_options(char *option) {
    if (strcmp(option, "--help") == 0) {
        print_help();
        return (2);
    }
    else
        return (dispatch_err(BAD_OPT, option, 0));
    return (0);
}

int parser(char **av, t_traceroute *data) {
    int ret;

    (void)data;
    if (av[1][0] == '-') {
        ret = check_options(av[1]);
        if (ret == 2)
            return (2);
        else if (ret == 1)
            return (1);
    }
    return (0);
}
