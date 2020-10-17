#include <stdio.h>
int main(){
    int num_1, num_2, temp, result, lcm=0, i;
    
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
    lcm=(num_1*num_2)/result;
    printf("LCM: %d\n", lcm);
    return 0;
}












// #include <stdio.h>
// int main(){
//     int num_1, num_2, temp, max;
    
//     printf("Enter a number: ");
//     scanf("%d",&num_1);
//     printf("Enter another number: ");
//     scanf("%d",&num_2);
    
//     if(num_1>num_2){
//         max=num_1;
//     } else{
//         max=num_2;
//     }
    
//     while(1){
//         if(max%num_1==0 && max%num_2==0){
//             printf("LCM: %d\n", max);
//             break;
//         }
//         max++;
//         printf("max: %d\n",max);
//     }
    
//     return 0;
// }
