#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nums;
	printf("Enter a nums: ");
	scanf("%d",&nums);
	if (nums %2 == 0){
		printf("->even.");
	} 
	else {
		printf("->odd.");
	} 
	return 0;
}