#include "ft_traceroute.h"

int main(int ac, char **av) {

    (void)av;
    if (ac == 1)
        return (print_help(), 0);
    return (0);
}