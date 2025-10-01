#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[1000];
  int n,i,j;
  int count;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
  	scanf("%d",&a[i]);	
  }
  
  
  
  

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 for(int i=0;i<n;i++){
  	count =0;
  for (int j=0;j<i;j++){
  	if(a[i]==a[j]){
  		count = 1;
  		break;
	  }
  }
  if(count==0){
  	for(int j=i+1;j<n;j++){
  		if (a[i]=a[j]){
  			printf("%d\n",a[i]);
  			break;
		  }
	  }
  }
}
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
