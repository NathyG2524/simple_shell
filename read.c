#include "print.h"
#include <string.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char **_read_line(void)
{
  char *line = NULL;
  char **arguments;
  size_t bufsize = 64;
  char *token;
  char *delim = " ";
  int i = 0;
  if (getline(&line, &bufsize, stdin) == -1)
  {
    if (feof(stdin))
    {
      exit(EXIT_SUCCESS);
    }
    else
    {
      perror("readline");
      exit(EXIT_FAILURE);
    }
  }
  token = strtok(line, delim);
  arguments[0] = token;
	for (i = 1; token; i++)
	{
		arguments[i] = token = strtok(NULL, delim);
	    printf("%s \n", arguments[i]);
	}
	printf("%s>>> \n", token);
	printf("%s ......", arguments[2]);
  return arguments;
}