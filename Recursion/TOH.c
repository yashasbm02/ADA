//Tower Of Hanoi using Recursion
#include<stdio.h>
int count=0;

//Function code
void TOH(int n,char FROM,char TO,char AUX){
    if(n==1){//initial condition
        printf("Move disc from %c to %c\n",FROM,TO);
        count++;
        return;
    }
    TOH(n-1,FROM,AUX,TO);
    printf("Move disc from %c to %c\n",FROM,TO);
    TOH(n-1,AUX,TO,FROM);
    count++;//count for moves
}
//Driver code
int main(){
    int n;
    printf("Enter the number of discs\n");
    scanf("%d",&n);
    TOH(n,'A','B','C');
    printf("Number of moves are: %d",count);
    return 0;
}