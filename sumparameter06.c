#include<stdio.h>
void sum(int n,int s){
    if(n==0){
        printf("%d",s);
    } 
    sum(n-1,s+n);
    return;   
}
int main(){
    int n;
    printf("Enter the valyue of n:");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}
// OUTPUT-
// Enter the valyue of n:4
// 10