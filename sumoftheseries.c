// Write a program in C to find the sum of the series [ x - x^3 + x^5 - ......]. [First N terms]

#include<stdio.h>
#include<math.h>

int main(){

int n,x;
int sum =0,count =0;

scanf("%d%d",&x,&n);

for(int i=1; i<=(n*2)-1; i++){
    if(i % 2 != 0){
       
       if(count % 2 == 0){
         sum = sum + pow(x , i);
       }
       else{
         sum = sum - pow(x , i);
       }
        count++;
    }
    
}

printf("%d",sum);

    return 0;


}