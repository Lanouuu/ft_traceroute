#include "ft_traceroute.h"

int main(int ac, char **av) {
    t_traceroute    data;

    if (ac == 1)
        return (print_help(), 0);
    if (parser(av, &data) == 1)
        return (1);
    return (0);
}
