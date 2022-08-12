//Program to find the fibonnaci series of a given limit
#include<stdio.h>

//Function code
int fib(int n,int mem){
    if(mem[n]!=NULL){
        return mem[n]!
    if(n==1||n==0){
        return 1;
    }
    else{
        int result=fib(n-1)+fib(n-2);//Recursion call
        mem[n]=result;
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
