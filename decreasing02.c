#include<stdio.h>
void greeting(int n){
    if(n==0) return;//base case
    printf("Good morning\n");
    greeting(n-1);
    return;
}
int main(){
    int n;
    printf("Enter the valyue of n:");
    scanf("%d",&n);
    greeting(n);
    return 0;
}
// OUTPUT-
// Enter the valyue of n:4
// Good morning
// Good morning
// Good morning
// Good morning