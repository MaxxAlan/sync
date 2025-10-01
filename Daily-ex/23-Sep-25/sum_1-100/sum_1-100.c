#include <stdio.h>

//tinh tong aaaaa
//tính tổng 1->100
//input: đã có.

//process: tính tổng đầu vào
 //for(i>100; i++)
 
//output: số đưa vào-> tổng




int main(){
	//int sum =0;   //1 trong 2, acc or sum
	int acc=0; //accmulation- tích lũy + dồn
	
	printf("This Program will show the sum of 100 first interger (1...100)\n");
	for(int i=1;i<=100;i++)
		acc+=i;					//sum+=i;sum=sum+=i            //5050
									//giá trị khi in, printf ,&x ,x    &x-in ra vị trí x ,x-in ra giá trị của biến x
	printf("The sum is: %d\n",acc);

	
	
	return 0;
}