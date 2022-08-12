#include<stdio.h>
int max(int a,int b){
    return a>b?a:b;
}

int knapsack(int cap,int val[],int wt[],int n){
    int i,j,K[n+1][cap+1];
    for(i=0;i<=n;i++){
        for(j=0;j<=cap;j++)
            if(i==0||j==0){
                K[i][j]=0;
            }
            else if(wt[i-1]<=j){
                K[i][j]=max(val[i-1]+K[i-1][j-wt[i-1]],K[i-1][j]);
            }
            else{
                K[i][j]=K[i-1][j];
            }
    }
    return K[n][cap];
}

int main(){
    int i,capacity,val[100],wt[100],n;
    printf("enter the number of items: \n");
    scanf("%d",&n);
    printf("Enter the capacity: \n");
    scanf("%d",&capacity);
    for(i=0;i<n;i++){
        printf("Enter the value and wight for item: %d\n",i+1);
        scanf("%d %d",&val[i],&wt[i]);
    }
    printf("The maximum value: %d\n",knapsack(capacity,val,wt,n));
}