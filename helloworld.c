#include<stdio.h>
#include<math.h>
void squareroot(float num);
int main (){
    int num ;
    printf("enter your the number :  ");
    scanf("%d",&num);
    squareroot(num);
    return 0 ;
}
void squareroot(float num){
    float sr ;
    sr = pow(num,2);
    printf(" the square root of the number : %f",sr);
    
}

