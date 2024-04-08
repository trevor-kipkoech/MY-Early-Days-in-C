#include<stdio.h>
int power(int base,int exponent){

if (exponent == 0)

return 1;

else 
return base * power(base,exponent - 1);

}

int main (){

int base,exponent;
printf("enter the input :");
scanf("%d\n",&base);



printf("enter the input :" );
scanf("%d\n",&exponent);


printf("%d\n ^ %d\n = %d\n",base,exponent,power(base,exponent-1));


return 0;
}