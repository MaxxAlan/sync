#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 100
void inputArray(int a[], int n);
void printArray(int a[], int n);
int sumPrimeArray(int a[], int n);


//=== Do not add new or change statements in the main function.===
int main() {

	system("cls");
  	printf("\nTEST Q3 (3 marks):\n");
	int n, a[MAX],sum=0;	
	char c;
	do {
		printf("How many elements do you want to enter into the integer array? [1..100] ");
		fflush(stdin);
		scanf("%d%c", &n, &c);
	} while(n<1 || n>MAX || c != '\n');	
	inputArray(a,n);
			
	//=== The output will be used to mark your program.===============
	printf("\nOUTPUT:\n");
  	sum=sumPrimeArray(a,n); 
  	printf("%d",sum);
  	printf("\n");
  	system ("pause");	
	return 0;
}
//=== Do not add new or change statements in this function.===
void inputArray(int a[], int n) {	
    int i;
	for(i=0; i<n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}
//This function checks n whether is prime or not
//if true then return 1, otherwise return 0
int isPrimeNumber(int n){
	int result  = 0;
	// Write your statements here
	if(n<2){
		return 0;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	} return 1;
	// End your statements 
	return result;
}
//----------------------------------------------
int sumPrimeArray(int a[], int n) {
	int sum  = 0;
	//Begin your statements here=====================
	for(int i=0;i<n;i++){
		if(isPrimeNumber(a[i])){
		sum=sum + a[i];
	}
}
	//Invoke isPrimeNumber function to get the result
	
	//End your statements============================
	return sum;
}

