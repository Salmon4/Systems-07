#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

char ** parse_args( char * line ){
  char ** var = malloc(sizeof(char *) * 5);
  int size;
  for (size = 0; size < 5; size++){
    var[size] = strsep(&line, " ");
  }
  var[size] = NULL;
  return var;
}

int main(){
  /**
  char line[100] = "woah-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
  **/
  char line[100] = "ls -a -l";
  char ** arg = parse_args(line);
  execvp(arg[0], arg);
  return 1;
}
