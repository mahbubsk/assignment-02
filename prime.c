#include <stdio.h>

int main(){
    int i, num, count=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++ ){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        printf("%d is prime number\n",num);
    } else{
        printf("%d is not prime number\n",num);
    }

    return 0;
}