#include "print.h"
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

/**
 *main - main function
 *
 * Return: zero
 */

int main()
{
        char **cmd;
	char *envp[] = {(char *) "PATH=/bin", 0};
	cmd = _read_line();
        while(1)
        {
                printf("> ");
                if ( fork() != 0)
                        wait ( NULL );
                else
                {
                        execve (cmd[0], cmd, envp);
                }
        }
        return 0;
}
