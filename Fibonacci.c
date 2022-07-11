//Program to find the fibonnaci series of a given limit
#include<stdio.h>

//Function code
int fib(int n){
    if(n==1||n==0){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);//Recursion call
    }
}

//Driver code
int main(){
    int n;
    printf("Enter the fibonacci limit\n");
    scanf("%d",&n);
    printf("%d th element of the series is: %d",n,fib(n));
    return 0;
}