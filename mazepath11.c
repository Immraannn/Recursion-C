#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
int rightways=0;
int downways=0;
if(cr==er && cc==ec){return 1;}
else if(cr==er){//only rightways call
    rightways +=maze(cr,cc+1,er,ec);}
else if(cc==ec){//only downways call
    downways +=maze(cr+1,cc,er,ec);
}
else if(cr<er && cc<ec){
    rightways +=maze(cr,cc+1,er,ec); 
    downways +=maze(cr+1,cc,er,ec);
}
int totalways=rightways+downways;
return totalways;
}
int main(){
    int n;
    printf("enter the number of rows of the maze:");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columns of the maze:");
    scanf("%d",&m);
    int noofways=maze(1,1,n,m);
    printf("%d",noofways);
    return 0;
}
// OUTPUT-
// enter the number of rows of the maze:4
// Enter the number of columns of the maze:4
// 20