//Program to find factorial of a number
#include<stdio.h>

//Function code
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    else{
        return factorial(n-1)*n;//Recursion call
    }
}

//Driver code
int main(){
    int n,fact;
    printf("Enter the number to find factorial\n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d is: %d",n,fact);
    return 0;
}