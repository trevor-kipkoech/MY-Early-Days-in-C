#include <stdio.h>
int main()
{
    char ch;
    //print uppercase alphabets and their ASCII values
    printf("Uppercase alphabets and their ASCII values :\n ");
    for(ch="A"; ch<="Z"; ++ch){

        printf(" %c :  %d\n ",ch,ch);
    
    }


    // print lowercase alphabets and their ASCII values
    printf("\nlowercase alphabets and their ASCII values :\n ");
     for(ch = "a"; ch <="z";++ch){
        printf("%c : %d\n ",ch,ch);
     }
     return 0;
}