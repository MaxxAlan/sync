#include <stdio.h>
#include <stdlib.h>

int main()
{
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  system("cls");
  printf("\nTEST Q3 (2 marks):\n");      
  int sumEvens , n;
  //============================================================ 
  //Begin your statements here
  //Note: after processing the result will be stored in the sumEvens variable 
  //.......
  //End your statements 
    while (1) {
        scanf("%d", &n);
        if (n == 0) {
            break;  
        }
        if (n % 2 == 0) {
            sumEvens += n;  
        }
    }
  //=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
  printf("\nOUTPUT:\n"); 
  printf("%d",sumEvens);
  printf("\n");
  system ("pause");
  return(0);
  //============================================================ 
}
