//Given an integer P. Check if it is a prime number or not.

#include<stdio.h>

int main(){

int X;
int count =0;

scanf("%d",&X);

for(int i=2; i<X; i++){
    if(X % i != 0){
        count++;
    }

    else{
        printf("Not prime number\n");
        break;
    }
}

if(count == (X-2)){
    printf("Prime number\n");
}

    return 0;
}