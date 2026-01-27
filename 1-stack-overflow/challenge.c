#include <stdlib.h>
#include <stdio.h>
void win(){
  system("/bin/sh");
}
int main(){
  setvbuf(stdin,NULL,_IONBF,0);
  setvbuf(stdout,NULL,_IONBF,0);
  char buff[100];
  printf("write your post here: \n");
  gets(buff);
  printf("your post: %s\n", buff);
  return 0;
}
