#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char line[100] = "woah-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);
}
