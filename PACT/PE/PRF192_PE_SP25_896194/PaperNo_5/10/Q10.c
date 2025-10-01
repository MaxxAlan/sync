#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a[100];
  int y;
  int num_month;
  int leap=0;
  scanf("%d",&y);
	scanf("%d",&num_month);
	if((y%4==0&&y%100!=0)||(y%400==0)){
			leap=1;
		}
	for(int i=0;i<num_month;i++){
		scanf("%d",&a[i]);
	}

  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for (int i=0;i<num_month;i++){
		int day=0;
		switch(a[i]){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				day =31;
				break;
			case 4: case 6: case 9: case 11:
				day=30;
				break;
			case 2: 
				day=(leap?29:28);
				break;
			default:
				continue;
		}
		printf("%d ",day);
}
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
