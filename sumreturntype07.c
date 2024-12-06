#include<stdio.h>
int sum(int n){
    if(n==1 ||n==0) return n;//base case
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter the valyue of n:");
    scanf("%d",&n);
    int summation=sum(n);
    printf("%d",summation);
    return 0;
}
// OUTPUT-
// Enter the valyue of n:6
// 21