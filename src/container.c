#include "container.h"


void
SmlInput_Init(SmlInput* input)
{
    input->directoryError = -1;
}

void
SmlInput_Populate(SmlInput* input, char* directory)
{
    input->directory = strdup(directory);
}

void
SmlInput_Validate(SmlInput* input)
{
    struct stat info;

    if (stat(input->directory, &info) == 0) {
        if (info.st_mode & S_IFMT == S_IFDIR) {
            input->directoryError = 0;
        } else {
            input->directoryError = 1;
        }
    } else {
        input->directoryError = 2;
    }
}