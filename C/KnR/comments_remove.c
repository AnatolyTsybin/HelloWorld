/*
 * Program that remove all comments from a C program.
 */

#include <stdio.h>

#define FILENAME_MAX_LENGTH 128

#define IN 1
#define OUT 0

int main(int argc, char **argv)
{
    FILE *input_file;
    FILE *output_file;
    int c, pc, status;

    if (argc < 2) {
        fprintf(stderr, "ERROR: you need to specify file to read");
        return -1;
    }

    input_file = fopen(argv[1], "r");
    output_file = fopen(argv[2], "w");

    pc = c = 0;
    status = OUT;
    while ((c = fgetc(input_file)) != EOF) {
        if (pc == '/' && c == '*')
            status = IN;

        if (status == OUT)
            fputc(c, output_file);

        if (pc == '*' && c == '/') {
            pc = 0;
            status = OUT;
        }

        if (status == IN || c == '/')
            pc = c;
    }

    return 0;
}
