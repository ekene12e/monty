#include "monty.h"
/**
 * read_line - reads a line from a file 
 * @filename: the file to be read
 * 
 */
char **read_line(char *filename)
{
    FILE *fd;
    int n = 0, i;
    char *array_of_read_lines[20];
    size_t bufsize = 1024;

    fd = fopen(filename, "r");
    if (fd == NULL)
        fprintf(stderr, "Error openening %s\n", filename);
        exit(EXIT_FAILURE);
    array_of_read_lines[0] = (char *)malloc(bufsize);

   /* while (fgets(array_of_read_lines[n], bufsize, fd) != NULL)
        {
            if (n > 0)
                array_of_read_lines[n] = (char *)malloc(bufsize);
            printf("%s\n", array_of_read_lines[n]);

            n++;
        }
    for(i = 0; i  < n; i++)
        printf("%s\n", array_of_read_lines[i]);
    *//*return (array_of_read_lines);*/
      for (n = 0; getline(&(array_of_read_lines[n]), &bufsize, fd) > 0; n++)      
            printf("%s", (array_of_read_lines[n]));
}

int main (int ac, char **av)
{
    read_line(av[1]);
}