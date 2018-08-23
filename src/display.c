#include "display.h"
#include "container.h"

void
sml_print_help ()
{
    puts("Need to run with arguments:\n\n  similis path_to_directory\n");
}

void
sml_print_directory_error(int errno)
{
    switch(errno) {
        case 1: puts("This is a file not a directory\n"); break;
        case 2: puts("No such file or directory\n"); break;
    }
}