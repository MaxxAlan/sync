#include <stdio.h>

//Bài 15: Tính S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + ….. + 1/ 1 + 2 + 3 + …. + N
//y tuong bai toan: tim Sn= 1/(1+2+3+..+k)
// sum (k=1->n)= 1/(1+2+3+..+k)
//cong thuc tong cap so cong: Sn= k(k+1)/2
//SnA = 2* 1/(k(k+1))
// 1/SnA= 2/(k(k+1))
//bien doi, quy dong
//2*[ 1-1/(k+1)]
//2*[(k+1-1)/k+1]
//Sn= 2k/(k+1)
void welcome(){
	printf("WELCOME to execute system!!\n");
	printf("This system will get output of this function: \n S(n) = 1 + 1/1 + 2 + 1/ 1 + 2 + 3 + .... + 1/ 1 + 2 + 3 +... .+ N\n");
	printf("x-> ");
}

double process(int x){
	double sum = ((2.0*x))/(x+1.0);
	return sum;
}

void output(double sum){
	printf("OUTPUT: %.4lf", sum);
}
int main(){
	welcome();
	int x;
	scanf("%d",&x);
	double result= process(x);
	output(result);
	getchar();
	return 0;
}