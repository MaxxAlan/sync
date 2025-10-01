#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char binary[17]; //tối đa 16 ký tự nhị phân +1 ký tự '\0'
  int decimal=0;
  scanf("%s",&binary);
  for (int i=0;binary[i]!='\0';i++){
  	decimal=decimal*2+(binary[i]-'0');
  }
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d",decimal);
  
  
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
