#include<stdio.h>
int main(){
    float k;
    printf("enter kilometer per hour:");
    scanf("%f",&k);
    printf("in miles per hour is:%f",k/1.609);
    return 0;
}