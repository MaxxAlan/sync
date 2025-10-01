#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int odd_count=0,even_count=0;
  int x,y;
  scanf("%d",&x);
  scanf("%d",&y);
  for (int i=x;i<=y;i++){
  	if(i%2==0){
  		even_count++;
	  }
	  else if (i%2!=0){
	  	odd_count++;
	  }
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d\n",even_count);
  printf("%d",odd_count);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
