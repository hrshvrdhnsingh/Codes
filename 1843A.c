#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        int min=INT_MAX,min2=INT_MAX;
        int i,j,b,temp,max=0,max2=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        max=a[n-1];
        min=a[0];
        if(n>=4){
            max2=a[n-2];
            min2=a[1];
            b=(max-min)+(max2-min2);
        }
        else{
            b=max-min;
        }
        printf("%d",b);
    }
}