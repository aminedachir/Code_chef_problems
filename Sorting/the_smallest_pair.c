#include <stdio.h>
int main(void) {
	int T,min;
	scanf("%d",&T);
	while(T--){
	    int N;
	    scanf("%d",&N);
	    int s[N];
	    int m[N-1];
	    for(int i=0;i<N;i++){
	        scanf("%d",&s[i]);
	    }
	    for(int i=0;i<=N-2;i++){
	        min = s[i]+s[i+1];
	        for(int j=i+1;j<=N-1;j++){
	            if(s[j]+s[i]<min){
	                min = s[j]+s[i]+(j-i);
	            }
	        }
	        m[i] = min;
        }
        min = m[0];
        for(int i=0;i<N-1;i++){
            if(m[i]<min){
                min = m[i];
            }
        }
        printf("%d",min);
	}
	return 0;
}

