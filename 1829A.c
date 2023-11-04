#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char str[10];
        fgets(str,10,stdin);
        
        char st[10]="codeforces";
        int i,c=0;
        for(i=0;i<10;i++){
           if(str[i]!=st[i])
           c++;
        }
        printf("%d\n",c);
    }
}