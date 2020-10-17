#include <stdio.h>
int main(){
    int num_1, num_2, temp, result;
    
    printf("Enter a number: ");
    scanf("%d",&num_1);
    printf("Enter another number: ");
    scanf("%d",&num_2);
    
    if(num_1>num_2){
        temp=num_1;
        num_1=num_2;
        num_2=temp;
    }
    
    for(int i=1; i<=num_2; i++){
        if(num_1%i==0 && num_2%i==0){
            result=i;
        }
    }
    printf("GCD: %d\n", result);
    return 0;
}
