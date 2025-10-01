#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  char s[1000];
  int word=0,num=0,other=0;
  fgets(s,sizeof(s),stdin);//để nhập chuỗi có dấu cách
  for(int i=0;s[i]!='\0';i++){
  if(isdigit(s[i])){
  num++;
}
  else if(isalpha(s[i])){
  word++;
}
  else if(s[i]!='\n'){
  other++;
}
  
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  printf("%d\n",word);
  printf("%d\n",num);
  printf("%d",other);  

  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
