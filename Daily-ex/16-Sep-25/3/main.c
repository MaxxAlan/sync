#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int exeRun(int argc, char *argv[]) {
	int month;
	int year;

	printf("Type month: ");
	scanf("%d",&month);
	if (month > 12 || month < 1) {
		printf("ERROR. Please type exactly month in real life.");
		return 1;
	}
	//logic units
		if (month ==2){
			printf("This month has 28-29 days\n");
				printf("If you want to get exactly days, please type year: ");
				scanf("%d",&year);
				 if ( (year%4==0&&year %100 ==!0  )|| year%400 ==0){
				 	printf("This month has 29 days."); return 0;
				 }
				 else {
				 	printf("This month has 28 days."); return 0;
				 }
		}
		
		else if (month == 9,6,4){
			printf("This month has 30 days");
			return 0;
		}
		else {
			printf("This month has 30 days");
			return 0;
		}
	
	return 0;
int main(){
	while (0){
		if exeRun(){
			break;
		}
		printf("Program end.");
		return 0;
	}
}
		
}