#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int i,n,k,x,flag=0;
        int c=0;
        scanf("%d %d %d",&n,&k,&x);
        int num=n,a[n];
        for(i=1;i<=k;i++){
            if(i==x) continue;
            else if(n<1) break;
            else if(num%i==0){
               flag=1;break;
            }
            else{int d=n/i;
                for(int j=0;j<d;j++){
                    if(i+1!=n){
                    a[c++]=i;
                    n-=i;}
                }
            }
        }
        if(flag==1){
            printf("YES\n");
            printf("%d\n",num/i);
            
                for(int k=0;k<num/i;k++)
                printf("%d ",i);
            
            printf("\n");
        }
        else if(n==0){
           printf("YES\n");
            printf("%d\n",c);
            for(int j=0;j<c;j++){
                printf("%d ",a[j]);}
            printf("\n");
        }
        else printf("NO\n");
    }
    return 0;
}