#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int m,n;
    int num[1000]={0};
    int count[1000]={0};
    for(int i=1;i<1000;i++){
        for(int j=1;j<=i;j++)
        if(i%j==0){
            num[i]++;
        }
    }
    int k=0;
    for(int i=0;i<1000;i++){
        num[1]=2;
        
        if(num[i]==2){
            
            count[k]=i;
            k++;
        }
    
    }
    
    while(scanf("%d %d",&n,&m)==2){
        printf("%d %d:",n,m);
        int i=0;
        for(;i<=n;i++){
            if(count[i]>n){
                break;
            }
        }
        i=i-n;
        for(int j=i;count[j]<n;j++){
            printf(" %d",count[j]);
        }
        printf("\n\n");
    }
    return 0;
}
