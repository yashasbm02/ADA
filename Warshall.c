#include<stdio.h>

int max(int a,int b){
    return a>b ? a:b;
}

void warshal(int arr[10][10],int n){
    int i,j,k;
    for(k=1;k<=n;k++){
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                arr[i][j]=max(arr[i][j],arr[i][k] && arr[k][j]);
            }
       }
    }
}

int main(){
    int arr[10][10]={0};
    int i,j,u,v,e,n;
    printf("enter number of vertices: \n");
    scanf("%d",&n);
    printf("Enter number of edges: \n");
    scanf("%d",&e);
    for(i=1;i<=e;i++){
        printf("Enter vertices at the end of edge %d\n",i);
        scanf("%d%d",&u,&v);
        arr[u][v]=1;
    }
    printf("\nInput matrix is: ");
    for(i=1;i<=n;i++){
        printf("\n");
        for(j=1;j<=n;j++){
            printf("%d\t",arr[i][j]);
        }
    }
    warshal(arr,n);
    printf("\nTransitive closure is: ");
    for(i=1;i<=n;i++){
        printf("\n");
        for(j=1;j<=n;j++){
            printf("%d\t",arr[i][j]);
        }
    }
return 0;
}
