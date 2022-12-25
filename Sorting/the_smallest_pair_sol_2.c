#include<stdio.h>
int main()
{
   int T,x;
   scanf("%d",&T);
   while(T--){
        int N;
        scanf("%d",&N);
        int s[N];
        for(int i=0;i<N;i++){
            scanf("%d",&s[i]);
        }
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                if(s[j]<s[i]){
                    x=s[i];
                    s[i]=s[j];
                    s[j]=x;
                }
            }
        }
    int sum=s[0]+s[1];
    printf("%d\n",sum);
   }
   return 0;
}
