#ifndef SML_CONTAINER
#define SML_CONTAINER 1

#include <malloc.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>


typedef struct {
    char * directory;
    int directoryError;
} SmlInput;

void SmlInput_Init(SmlInput* input);
void SmlInput_Populate(SmlInput* input, char* directory);
void SmlInput_Validate(SmlInput* input);

#endif