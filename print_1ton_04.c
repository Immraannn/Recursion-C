#include<stdio.h>
void increasing(int x,int n){
    if(x>n) return ;//base case
    printf("%d,",x);
    increasing(x+1,n);
    return;
}
int main(){
    int n;
    printf("Enter the valyue of n:");
    scanf("%d",&n);
    increasing(1,n);
    return 0;
}
// OUTPUT-
// Enter the valyue of n:5
// 1,2,3,4,5,