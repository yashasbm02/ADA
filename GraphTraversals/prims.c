#include<stdio.h>
int main(){
    int cost[10][10],visited[10]={0},i,j,n,a,b,no_e=1,min,min_cost=0;
    printf("Enter number of nodes: \n");
    scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0){
                cost[i][j]=1000;
            }
        }
    }
    visited[1]=1;
    while(no_e<n){
        min=1000;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(cost[i][j]<min && visited[i]!=0){
                    min=cost[i][j];
                    a=i;
                    b=j;
                }
            }
        }
    if(visited[b]==0){
        printf("\nCost from %d to %d is: %d\n",a,b,min);
        min_cost+=min;
        no_e++;
    }
    visited[b]=1;
    cost[a][b]=cost[b][a]=1000;
    }
    printf("\nMinimum weight is %d",min_cost);
}