#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int arr[20]=(23,21,12,64,83,24,45,23,32,45,12,85,34,1,5,26,20,13,54,68);
//int c=0;
long int b=0;
int t=1;
long int arr[100000];

long int function(long int arr[]){
while(t==1){
t=0;
//c++;
for (long int i=0; i<99999; i++)
{
    if (arr[i]>arr[i+1])
    {
        b=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=b;

        t=1;

    } //printf("arr[%d]= %d\n",i,arr[i]);
  
}//printf("arr[19]= %d\n",arr[19]);
//printf("------------------\n"); 
}}


int main(){

long int  i;

for (i = 0; i < 100000; i++)
    {
    arr[i] = rand()%100000+1;
    }
   // printf("arr[%d]= %d\n",i,arr[i]);}

  //printf("------------------\n");   
clock_t tic = clock();
 function(arr);
clock_t toc = clock();
printf("Vremya raboti: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
 //printf("c = %d\n",c);
//вывелся счетчик
    return 0;
}