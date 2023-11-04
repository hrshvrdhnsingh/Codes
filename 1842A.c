#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d %d",&n,&m);
        int a[n],b[m],c=n,d=m;
        for(int i=0;i<n;i++)
          scanf("%d",&a[i]);
        for(int i=0;i<m;i++)
          scanf("%d",&b[i]);
        int i=0,j=0;
        for(;i<n;i++){
            for(;j<m;j++){
                if(c==0||d==0)
                break;
                if(a[i]-b[j]>0){
                    d--;a[i]-=b[j];continue;
                }
                else if(a[i]-b[j]<0){
                    c--;b[j]-=a[i];break;
                }
                else{
                    c--;d--;j++;break;
                }

            }
        }
        if(c==0&&d==0)
        printf("Draw\n");
        else if(d==0)
        printf("Tsondu\n");
        else if(c==0)
        printf("Tenzing\n");
    }
}