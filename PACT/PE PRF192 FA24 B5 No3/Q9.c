#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d",&n);
  int prime =1;
  if (n<2){
  	prime =0;
  }
  else {
  	for (int i=2;i<n;i++){
  		if(n%i==0){
  			prime =0;
  			break;
		  }
	  }
  }
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
   if(prime){
  	int temp=n;
  	int octal[32];
  	int index=0;
  	while (temp>0){
  		octal[index++]=temp %8;
  		temp /=8;
		  }
		  for (int i=index-1;i>=0;i--){
		  	printf("%d",octal[i]);
		  }
	  } else {
	  	printf("%d is not a prime numer",n);
	  }

  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
