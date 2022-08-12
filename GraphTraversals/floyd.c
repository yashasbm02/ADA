#include<stdio.h>

int min(int a,int b){
    return a<b?a:b;
}

void floyd(int arr[10][10],int n){
    int i,j,k;
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i==j){
                    arr[i][j]=999;
                }
                else{
                    arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
                }
            }
        }
    }
}

int main(){
    int arr[10][10];
    int u,v,i,j,e,n,w;
    printf("Enter number of vertices:");
    scanf("%d",&n);
    printf("Enter number of edges: ");
    scanf("%d",&e);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
           arr[i][j]=999;
        }
    }
    for(i=1;i<=e;i++){
        printf("Enter end verices of edge: %d\n",i);
        scanf("%d%d",&u,&v);
        printf("Enter the weight of the edge: \n");
        scanf("%d",&w);
        arr[u][v]= w;
    }
    printf("\nInput matrix is: ");
    for(i=1;i<=n;i++){
        printf("\n");
        for(j=1;j<=n;j++){
            printf("%d\t",arr[i][j]);
        }
    }
    floyd(arr,n);
    printf("\nTransitive closure is: ");
    for(i=1;i<=n;i++){
        printf("\n");
        for(j=1;j<=n;j++){
            printf("%d\t",arr[i][j]);
        }
    }
return 0;
}