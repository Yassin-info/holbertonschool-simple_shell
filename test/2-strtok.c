#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[] = "3robi, spow";
    const char *delim = " ,";

    char *tok = strtok(str, delim);
    
    while (tok != NULL) {
        printf("%s\n", tok);
        tok = strtok(NULL, delim);
    }

    return 0;
}
