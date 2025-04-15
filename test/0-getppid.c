#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t my_pid = getpid();
    pid_t ppid = getppid();

    printf("My PID is : %d\n", my_pid);
    printf("Parents PID is : %d\n", ppid);
    return (0);
}
