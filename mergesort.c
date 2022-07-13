//Program to perform mergesort 
#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int l,int m,int r){
    int i,j,k;
    i=j=0;
    k=1;
    int n1=m-l+1;//first half
    int n2=r-m;//second half

    int L[n1],R[n2];

    for(i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }

    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-1)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main(){
    int n,arr[];
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter array elements\n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr);
    }
    mergesort(arr,0,n);
    printf("Sorted array is:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d\n",arr);
    }
    
return 0;
}