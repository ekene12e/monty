#include "monty.h"
#include <stdio.h>
#define  _GNU_SOURCE
#define  _POSIX_C_SOURCE 200809L
char *array_of_read_lines[1000] = {NULL};

/**
 * read_line - reads a line from a file 
 * @filename: the file to be read
 * 
 */
char **read_line(char *filename)
{
    FILE *fd;
    int n = 0, i;
    
    size_t bufsize = 1024;

    fd = fopen(filename, "r");
    if (fd == NULL)
        fprintf(stderr, "Error openening %s\n", filename);
        exit(EXIT_FAILURE);

    while (fgets(array_of_read_lines[n], bufsize, fd) != NULL)
        {
            n++;
        }
    
    for(i = 0; i  < n; i++)
        printf("s\n", array_of_read_lines[i]);
    return (array_of_read_lines);
}

int main (int ac, char **av)
{
    read_line(av[1]);
}