#include "get_next_line.h"

int main()
{
    int fd = open("test.txt", O_RDWR);
    char *line1 = get_next_line(fd);
    printf("%s",line1);
    free(line1);
    close(fd);
}