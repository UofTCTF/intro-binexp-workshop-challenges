#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

int win(){
  int* winvar = (int*)malloc(0x20);
  if (winvar[4] == 1337){
    system("/bin/sh");
  }
}
int main(){
  setvbuf(stdin,NULL,_IONBF,0);
  setvbuf(stdout,NULL,_IONBF,0);
  int* curr_buffer = NULL;
  while (true){
    printf("options: malloc (M), free (F), try win (W) \n");
    char c;
    scanf(" %c", &c);
    switch (c){
      case 'M':
        if (curr_buffer == NULL){
          curr_buffer = malloc(0x20);
          printf("data for allocated memory (0x20 bytes):");
          scanf("%d", curr_buffer + 4);
        }
        break;
      case 'F':
        if (curr_buffer != NULL) free(curr_buffer);
        break;
      case 'W':
        win();
        break;
      default:
        break;
    }
  }
  return 0;
}

