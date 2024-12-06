#include<stdio.h>
int powerlog(int a,int b){
    if(b==1) return a;
    if(b%2==0){
        return powerlog(a,b/2)*powerlog(a,b/2);
    }
   else{
    return  powerlog(a,b/2)*powerlog(a,b/2)*a;
   }

}
int main(){
    int a;
    printf("Enter base:");
    scanf("%d",&a);
    int b;
    printf("Enter power:");
    scanf("%d",&b);
    int p=powerlog(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;
}
// OUTPUT-
// Enter base:2
// Enter power:20
// 2 raised to the power 20 is 1048576