#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    int ans =fibo(n-1)+fibo(n-2);
    return ans;
}
int main(){
int n;
printf("Enter the  number:");
scanf("%d",&n);
int x=fibo(n);
printf("%d",x);    
    return 0;
}
// OUTPUT-
// Enter the prime number:5
// 5