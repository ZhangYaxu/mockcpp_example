// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ExampleConfig.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("%s Version %d.%d\n",
            argv[0],
            Example_VERSION_MAJOR,
            Example_VERSION_MINOR);
        printf("Usage: %s number\n", argv[0]);
        return 1;
    }
    double inputValue = atof(argv[1]);
    double outputValue = sqrt(inputValue);
    printf("The square root of %g is %g\n", inputValue, outputValue);
    return 0;
}



