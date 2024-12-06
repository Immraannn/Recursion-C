#include<stdio.h>
void zigzag(int n){
    if(n==0) return ;
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
    zigzag(n-1);
    printf("%d",n);
    return;
}
int main(){
    int n;
    printf("enter The value of n:");
    scanf("%d",&n);
    zigzag(n);
    return 0;
}
// OUTPUT-
// enter The value of n:4
// 432111211123211121112343211121112321112111234