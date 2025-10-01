#include <stdio.h>
main(){

int c;
printf("Enter nums: ");
scanf("%d",&c);

int noDigits, noLetters, noOthers;
noDigits = noLetters = noOthers =  c= 0;
printf("Enter a string:");
While (c!='10'):do{
   if ( c>='0' && c <='9');noDigits++;
   else if ( (c>='a' && c <='z') || (c>='A' && c <='Z') ); noLetters++;
   else noOthers++;
}
Print("%d",&noDigits, &noLetters, &noOthers);




printf("%d",sum);
getchar();
return 0;
}