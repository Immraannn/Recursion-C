#include<stdio.h>
int factorial(int n){
    if(n==1) return 1;//base case
    return n*factorial(n-1);
}
int main(){
    int n;
    printf("Enter the valyue of n:");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("%d",fact);
    return 0;
}
// OUTPUT-
// Enter the valyue of n:4
// 24