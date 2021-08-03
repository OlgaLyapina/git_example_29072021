#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long int arr[100000];
//int c=0;
long int b=0;
int t=1;
long int k;


long int function(long int arr[])
{
    for(long int j = 0; j<100000;j++)
    {
        long int min = 10000000;
       for(long int i = j; i<100000;i++)
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
           // c++;

    }

    //for(int i=0; i<10000; i++)
    {
         //printf("arr[%d]= %d\n",i,arr[i]);
    }
   // printf("------------------\n");
}






int main(){

long int  i;

for (i = 0; i < 100000; i++){
    arr[i] = rand()%100000+1;
}
   // printf("arr[%d]= %d\n",i,arr[i]);}

 // printf("------------------\n");

clock_t tic = clock();
 function(arr);
clock_t toc = clock();
 //printf("c = %d\n",c);
  printf("Vremya raboti: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
//вывелся счетчик
    return 0;
}