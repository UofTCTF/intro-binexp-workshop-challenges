#include <stdlib.h>
#include <stdio.h>
int main(){
  setvbuf(stdin,NULL,_IONBF,0);
  setvbuf(stdout,NULL,_IONBF,0);
  char buff[100];
  printf("write your post here: \n");
  printf("buff pointer: %p", buff);
  gets(buff);
  printf("your post: %s\n", buff);
  return 0;
}

