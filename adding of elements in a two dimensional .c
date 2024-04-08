#include<stdio.h>
int main()
{

   //creating a function
   void adding_matrixes(int matrix1[2][2],int matrix[2][2]){
    int result;
    int result[2][2];
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

   }
   //display
   printf("the resulting matrix is : \n");

   for(int i = 0; i<3;i++){
    for(int j=0; j<3; j++){

        printf(" %d ",result[i][j]);
    }
    printf("\n");
   }

   int main()
   {
   adding_matrixes(matrix1,matrix2);
   }

}


