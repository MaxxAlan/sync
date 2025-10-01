#include <stdio.h>
main(){
int s,i,n;
printf("Count to: "); scanf("%d",&n);
s=0;
//for (block1; condition; task2) task1;
for (i=1;i<=n;i++){
	s=s+i; 			//user type i
}

printf("%d",s);

getchar();
return 0;
}
