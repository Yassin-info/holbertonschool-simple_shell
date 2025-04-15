#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    for (i = 0; i < 5; i++)
    {
    pid_t pid = fork();
    if (pid == -1) 
        {
            perror("fork");
            exit(EXIT_FAILURE);
        }
        
        if (pid == 0)
        {
            printf("Child %d (PID %d) execute ls\n", i+1, getpid());
            execlp("ls", "ls", "-l", "/tmp", NULL);
            
            perror("execlp");
            exit(EXIT_FAILURE);
        }
        else
        {
            int status;
            waitpid(pid, &status, 0);
            
            if (WIFEXITED(status)) 
            {
                printf("Child %d terminate with code %d\n\n",
                      pid, WEXITSTATUS(status));
            }
        }
    }
    return (0);
}
