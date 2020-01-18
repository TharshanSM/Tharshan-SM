#include<stdio.h>
int main(){
        int array[10];
        int v;
        for(int i=0;i<10;i++){
                printf("Enter the array[%d] value: ",i);
                scanf("%d",&array[i]);
        }
         printf("Enter the v value:");
         scanf("%d",&v);

        for(int i=0;i<10;i++){
                if(array[i]==v){
                        printf("v is in the array");
                        return 0;       //return zero to exit the program
                }
        }
        printf("v is not in the array\n");

}

