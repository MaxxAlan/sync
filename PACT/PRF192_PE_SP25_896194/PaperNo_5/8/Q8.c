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
  int a[100];
  for(int i=0;i<n;i++){
  	scanf("%d",&a[i]);
  }
 

  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	 int prime=0;
  for(int i=0;i<n;i++){
  	int num=a[i];
  	int isprime=1;
  	if(num<2){
  		isprime=0;
	  } else if (num==2){
	  	isprime=1;
	  }
	  else{
	  	for(int j=2;j<n;j++){
	  		if(num%j==0){
	  			isprime=0;
	  			break;
			  }
		  }
	  }
	if (isprime){
		printf("%d ",num*num);
		prime=1;
	}
}
	if(!prime){
		printf("No primes");
	}
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
