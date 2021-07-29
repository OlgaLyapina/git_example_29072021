#include <stdio.h>

int max = 0;

int fan(int a, int b, int c, int d){
    if (a>b){
        max = a;
    }else{
        max = b;
    }

 if (max<c){
        max = c;
    }

if (max<d){
        max = d;
    }

}

int main(){

max = fan(50, 30, 10, 20);
printf("max=%d\n", max);
}