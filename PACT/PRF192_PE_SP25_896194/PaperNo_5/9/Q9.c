#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[100];
  char w[100];
  int count=0;
  scanf("%[^\n]s",s);
  scanf("%s",w);
  char *token=strtok(s," ");
  while(token!=NULL){
  	if(strcasecmp(token,w)==0){
  		count++;
	  }
	  token =strtok(NULL," ");
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  printf("%d",count);
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
