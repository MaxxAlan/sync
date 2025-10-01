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
  	scanf("%d ",&a[i]);
}
	int p;
	scanf("%d",&p);
	for (int i=p;i<n-1;i++){
		a[i]=a[i+1];
	} n--;
	
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(int i=0;i<n;i++){
  	printf("%d ",a[i]);
  }
  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
