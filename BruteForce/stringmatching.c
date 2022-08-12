#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int match(int str[], int patt[], int stlen, int palen){
    int i,j,count=0;

    for(i=0;i<stlen-palen;i++){
        j=0;
        while(j<palen&&patt[j]==str[i+j]){
            count++;
            j++;
        }
        if(j==palen)
            return count;
    }
    return count;
}

int main(){
    FILE *b,*a,*w;
    system("rm Best.txt");
    system("rm worst.txt");
    system("rm average.txt");

    b=fopen("best.txt","a");
    a=fopen("average.txt","a");
    w=fopen("worst.txt","a");

    int *str,pat[4],n;
    for (n = 100;n <= 1000; n+=100){
        str = (int*)calloc(n,sizeof(int));
        str[n-1]=1;
        pat[0]=pat[1]=pat[2]=0;
        pat[3]=1;
        fprintf(w,"%d %d\n",n,match(str,pat,n,4));

        pat[3]=0;
        fprintf(b,"%d %d\n",n,match(str,pat,n,4));

        str[n/2]=str[n/2+1]=1;
        pat[2]=pat[3]=1;
        fprintf(a,"%d %d\n",n,match(str,pat,n,4));
    }       
    fclose(b);
    fclose(a);
    fclose(w);
    return 0;
}