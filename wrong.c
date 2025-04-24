#include<stdio.h>
#include<string.h>

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int J;
        int print[256]={0};
        scanf("%d",&J);
        
        for(int i=0;i<J;i++){
            int val;
            char ch;
            scanf(" %c %d",&ch,&val);
            getchar();
            print[(unsigned char)ch]=val;
            
        }
        getchar();
        int cent;
        scanf("%d",&cent);
        int count;
        scanf("%d",&count);
        char line[10001];
        long long sum=0;
        for(int i=0;i<count;i++){
            fgets(line,sizeof(line),stdin);
            for(int j=0;line[j];j++){
                sum+=print[(unsigned char)line[j]];
            }
        }
        printf("%lld.%02lld$\n",sum/100,sum%100);
        if(sum>cent){
            printf("Yes");
        }else{
            printf("No");
        }
    }
}
