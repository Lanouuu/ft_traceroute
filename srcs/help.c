#include "ft_traceroute.h"

void    print_help(void) {
    fprintf(stdout,
        "Usage:"
            "\n\tft_ping [OPTION] [ARGUMENTS]\n\n"
    );
    fprintf(stdout,
        "Options:"
            "\n\t--help : Read this help and exit\n\n"
    );
    fprintf(stdout,
        "Arguments:"
            "\n\thost : The host to traceroute to\n"
    );
    return ;
}
