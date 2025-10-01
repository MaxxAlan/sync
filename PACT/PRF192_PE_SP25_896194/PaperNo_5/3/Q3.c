#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  int a[100];
  scanf("%d",&n);
  for (int i=0;i<n;i++){
  	scanf("%d",&a[i]);
  }
  for (int i=0;i<n-1;i++){
  	for(int j=0;j<n-i-1;j++){
  		if(a[j]<a[j+1]){
  			int t=a[j];
  			a[j]=a[j+1];
  			a[j+1]=t;
		  }
	  }
  }
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (int i=0;i<n;i++){
  	if(a[i]%2!=0){
  		printf("%d ",a[i]);
	  }
  }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
