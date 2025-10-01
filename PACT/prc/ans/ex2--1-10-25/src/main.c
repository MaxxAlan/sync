#include <stdio.h>

//Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2


void welcome(){
	printf("Plsase type n to execute: Sn= x1^2+ x2^2+..+xn^2\n");
	printf("Type INTERGER\n");
	printf("-> ");
}

int process(){
int mutiply =0;
int n;
scanf("%d",&n);
for (int i=1; i<=n; i++){
	mutiply= i*2 +mutiply;
	}
	return mutiply;
}

void output(int mutiply)
{
printf("\n");
printf("OUTPUT: %d",mutiply);
}
int main(){
	welcome();
	int result= process();
	output(result);
	
	
	
	
	getchar();
	return 0;
}