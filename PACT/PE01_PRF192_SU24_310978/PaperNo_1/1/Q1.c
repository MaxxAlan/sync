#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//------------------------------------------
void printVolume(int radius, int height ) {

	//Write your statements here
	float s,v;
	float pi=3.14;
	s=pi*radius*radius;
	v=s*height;
	
	//The output value is formatted in two decimal places
	
	printf("%.2f",v);
	//End your statements

}
int main() {
	//=============DO NOT ADD NEW OR CHANGE THIS STATEMENTS========
	system("cls");
	printf("\nTEST Q1 (2 marks):\n");
	int r, h;
	double check;
	do {
		printf("Enter radius and height of cylinder: ");
		scanf("%d%d",&r, &h);
	} while((r<=0) || (h<=0));
	printf("\nOUTPUT:\n");
	printVolume(r, h);
	printf("\n");
	system ("pause");
	return(0);
	//============================================================
}

