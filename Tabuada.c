#include <stdio.h>

int main(void) {

  int n, i=0;

  printf("+__________________________+");
  printf("\n\n           TABUADA   ");
  printf("\n+__________________________+");
  printf("\n\n    Escolha sua tabuada: ");
  scanf("%d", &n);
  printf("\n+__________________________+");
  


  for(i = 0; i <= 10; i++){
    printf("\n\n|       %2d * %2d = %2d       |", n, i, (n*i));
    
  }
    printf("\n\n\n ##########################");
    printf("\n ##########################");
    printf("\n             FIM         ");
    printf("\n ##########################");
    printf("\n ##########################\n\n\n\n");
  
  return main();
}
