#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    printf("$ ");
    read = getline(&line, &len, stdin);

    if (read == -1) {
        perror("Error to read");
        free(line);
        return 1;
    }

    printf("Your entry : %s", line);
    free(line);
    return 0;
}
