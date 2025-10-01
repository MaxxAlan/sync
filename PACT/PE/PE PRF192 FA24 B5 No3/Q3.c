#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[1000];
  int n;
  scanf("%d",&n);
  for (int i=0;i<n;i++){
  	scanf("%d",&a[i]);
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  int t=0;
  for(int i=0;i<n-1;i++){
  	for (int j=0;j<n-1-i;j++){
  		if (a[j]<a[j+1]){
  			t=a[j];
  			a[j]=a[j+1];
  			a[j+1]=t;
		  }
	  }
  }
  for(int i=0;i<n;i++){
  		if (a[i]%2!=0){
  			printf("%d ",a[i]);
		  }
	  }
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
