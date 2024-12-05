#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int r[n];
    for(int k=0;k<n;k++){
        scanf("%d",&r[k]);
    }
    int count=0;
    int i,j;
    while(scanf("%d%d",&i,&j)!=EOF){
        for(int a=0;a<n;a++){
            if(r[a]>i && r[a]<j){
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
}
