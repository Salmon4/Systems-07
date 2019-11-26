#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** parse_args( char * line ){
  char ** var[6];
  int size;
  for (size = 0; size < 5; size++){
    var[size] = strsep(&line, " ");
  }
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
}
