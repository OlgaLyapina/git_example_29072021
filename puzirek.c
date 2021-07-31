#include <stdio.h>
#include <stdlib.h>

//int arr[20]=(23,21,12,64,83,24,45,23,32,45,12,85,34,1,5,26,20,13,54,68);
int c=0;
int b=0;
int t=1;
int arr[20];

int function(int arr[]){
while(t==1){
t=0;
c++;
for (int i=0; i<19; i++)
{
    if (arr[i]>arr[i+1])
    {
        b=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=b;

        t=1;

    } printf("arr[%d]= %d\n",i,arr[i]);
  
}printf("arr[19]= %d\n",arr[19]);
printf("------------------\n"); 
}}


int main(){

int  i;

for (i = 0; i < 20; i++){
    arr[i] = rand()%100+1;
    printf("arr[%d]= %d\n",i,arr[i]);}

  printf("------------------\n");   

 function(arr);

 printf("c = %d\n",c);

    return 0;
}