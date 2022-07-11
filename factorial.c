//Program to find factorial of a number using recursion
#include<stdio.h>

//Function code
int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);//recursion call
    }
}

int main(){//Driver code
    int n,fact;
    printf("Enter the number to find it's factorial\n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial of %d is: %d",n,fact);
    return 0;
}