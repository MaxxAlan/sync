#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[1000];
  int upper=0,lower=0,other=0;
  fgets(s,sizeof(s),stdin);//để nhập chuỗi có dấu cách
  for(int i=0;s[i]!='\0';i++){
  if(isupper(s[i])){
  upper++;
}
  else if(islower(s[i])){
  lower++;
}
  else if(s[i]!='\n'){
  other++;
}
  
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d\n",upper);
  printf("%d\n",lower);
  printf("%d",other);  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
