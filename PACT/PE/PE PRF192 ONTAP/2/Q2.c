#include <stdio.h>
#include <stdlib.h>
//------------------------------------
void sum(int n){
   
   // Write your statements here 
   float sum=0;
  for(int i=0;i<n*2;i=i+2){
  	sum=sum+1.0/(i+2);
  }
   //The output value is formatted in two decimal places
    printf("%.2f",sum);
   //End your statements
}

//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION========
int main()
{  
  system("cls");
  printf("\nTEST Q2 (3 marks):\n");
  int n;
  printf("\nEnter n: ");
  scanf("%d", &n);  
  //============================================================  
  //=====DO NOT ADD NEW OR CHANGE STATEMENTS AFTER THIS LINE=====
  //==THE OUTPUT AFTER THIS LINE WILL BE USED TO MARK YOUR PROGRAM==
  printf("\nOUTPUT:\n");
  sum(n);
  printf("\n");
  system ("pause");
  return(0);
}
