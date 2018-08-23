#include "display.h"
#include "container.h"

void
main(int argc, char** argv)
{
    printf("Starting SIMULIS...\n\n");

    if (argc < 2) {
        sml_print_help();
    } else {
        SmlInput _input;
        SmlInput * input = &_input;
        SmlInput_Init(input);
        SmlInput_Populate(input, argv[1]);
        SmlInput_Validate(input);
        if (input->directoryError) {
            sml_print_directory_error(input->directoryError);
        } else {
            
        }
    }
}