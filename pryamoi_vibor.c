#include <stdio.h>
#include <stdlib.h>

int arr[20];
int c=0;
int b=0;
int t=1;
int k;

int function(int arr[])
{
    for(int j = 0; j<20;j++)
    {
        int min = 32000;
       for(int i = j; i<20;i++)
       {
           if(arr[i]<min)
           {
               k=i;
               min=arr[i];
           } 
          
        
       }
            b=arr[j];
            arr[j]=arr[k];
            arr[k]=b;
            c++;

    }

    for(int i=0; i<20; i++)
    {
         printf("arr[%d]= %d\n",i,arr[i]);
    }
    printf("------------------\n");
}






int main(){

int  i;

for (i = 0; i < 20; i++){
    arr[i] = rand()%100+1;
    printf("arr[%d]= %d\n",i,arr[i]);}

  printf("------------------\n");   

 function(arr);

 printf("c = %d\n",c);
//вывелся счетчик
    return 0;
}