//Program to find the fibonnaci series of a given limit using dynamic programming
#include<stdio.h>
int term[1000];//Memoization array
int count=0;
//Function code
int fib(int n){
    count++;
    if(term[n]!=0){
        return term[n];
    }
    if(n<=1){
        return n;
    }
    else{
        term[n]=fib(n-1)+fib(n-2);
        return term[n];//Recursion call
        }
}



//Driver code
int main(){
    int n;
    printf("Enter the fibonacci limit\n");
    scanf("%d",&n);
    printf("%d th element of the series is: %d\n",n,fib(n));
    printf("count is %d\n",count);
    return 0;
}
