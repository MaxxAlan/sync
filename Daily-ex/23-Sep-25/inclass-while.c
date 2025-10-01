#include <stdio.h>
#include <stdlib.h>
int main(){
//	int sum;
	int sumNumbers=0;
	
	

	for(int i=0;i<5;i++){
	
		if (i%2==1){
		continue;
		}
		sumNumbers +=i;
		
	}
	
	printf("Sum of nums: %d\n",sumNumbers);
	system("pause");
	return 0;
}
