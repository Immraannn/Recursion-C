#include<stdio.h>
void preInpost(int n){
    if(n==0) return ;
    printf("Pre %d\n",n);
    preInpost(n-1);
    printf("In %d\n",n);
    preInpost(n-1);
    printf("Post %d\n",n);
    return;
}
int main(){
    int n;
    printf("enter The value of n:");
    scanf("%d",&n);
    preInpost(n);
    return 0;
}
// OUTPUT-
// enter The value of n:2
// Pre 2
// Pre 1
// In 1
// Post 1
// In 2
// Pre 1
// In 1
// Post 1
// Post 2