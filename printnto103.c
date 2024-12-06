#include<stdio.h>
void decreasing(int n){
    if(n==0) return 0;//base case
    printf("%d,",n);
    decreasing(n-1);
    return;
}
int main(){
    int n;
    printf("Enter the valyue of n:");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}
// OUTPUT-
// Enter the valyue of n:5
// 5,4,3,2,1,