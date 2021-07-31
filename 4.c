#include <stdio.h>



int predmax(int a, int b, int c, int d){

int max1;
int max2;

    if (a>b){
    max1=a;
    max2=b;
} else{
    max1=b;
    max2=a;
}
if (max1<c){
    max2=max1;
    max1=c;
}else{
 if(max2<c){
    max2=c;}}

if(max1<d){
    max2=max1;
    max1=d;
}
else{if (max2<d){
    max2=d;}
}return max2;
}



