#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float length, weith,area,perimeter;
	
	
	printf("Type length: "); scanf("%f",&length);
	printf("Type weith: "); scanf("%f",&weith);
	
	if (length>weith && length,weith >0){
		printf("Comfirm.");
			area=length*weith;
			perimeter=(length+weith)*2;
			
			printf("Area of shape: %f",&area);
			printf("Perimeter of shape: %f",&perimeter);
	}
	else {
		printf("Broken, please type like this rule: length>weith and length,weith >0");
		return 0;
	}
	
	
	return 0;
}