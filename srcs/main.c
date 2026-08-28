#include "ft_traceroute.h"

int main(int ac, char **av) {
    t_traceroute    data;
    int             ret;

    if (ac == 1)
        return (print_help(), 0);
    ret = parser(av, &data);
    if (ret == 2)
        return (0);
    else if (ret == 1)
        return (1);
    return (0);
}
