#include<stdio.h>
void increasing(int n){
    if(n==0) return 0;//base case
    increasing(n-1);
    printf("%d,",n);
    return;
}
int main(){
    int n;
    printf("Enter the valyue of n:");
    scanf("%d",&n);
    increasing(n);
    return 0;
}
// OUTPUT-
// Enter the valyue of n:5
// 1,2,3,4,5,