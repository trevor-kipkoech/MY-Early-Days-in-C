#include<stdio.h>
int main (){

    int sum ;
    int array[5]={1,2,3,4,5};
    sum = array[1] + array [3];
    printf("The value of the element at index 1 is %d\n",array[1]);
    printf("The value of the element at index 3 is %d\n",array[3]);
    printf("The sum of elements at indexes 1 and 3 is %d \n" ,sum);
   return 0; 
}