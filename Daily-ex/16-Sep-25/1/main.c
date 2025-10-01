#include <stdio.h>
 int main(){
 	float shortSize,longSize,area,perimeter;
 	char userChoice;
 	printf("Chuong trinh tinh chu vi, dien tich hinh chu nhat\n");
 	printf("Programe caculate perimeter, area of rectangle\n");
 	//ham tinh toan | caculate eng
 	area=shortSize*longSize;
 	perimeter=(shortSize+longSize)*2;
 	
 	
 	printf("Input length: ");
 	scanf("%f",&longSize);
 	
 	printf("Input width: ");
 	scanf("%f",&shortSize);
 	
 	
//lua chon tinh toan | choice option for caculating
 	printf("Ur option is: 1 or else. If you choice 1 engine show result of area of rectangle: ");
 	scanf("%c",&userChoice);
	 	if (userChoice = 1) { printf("Area of this shape: %f",&area); }
			else	{printf("Perimeter of this shape: %f",&perimeter);}	
return 0;
 }