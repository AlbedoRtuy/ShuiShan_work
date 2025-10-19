#include<stdio.h>
int main(){
    int m,n,ta,tb;
    ta=0;tb=0;
    char ch;
    scanf("%d%d",&m,&n);
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            scanf(" %c",&ch);
            if (ch=='A') ta++;
            if (ch=='B') tb++;
        }
    }
    if (ta>tb&&(ta>(n*m)/2)) printf("final result:A(%d)wins",ta);
    else if (ta<tb&&(tb>(n*m)/2)) printf("final result:B(%d)wins",tb);
    else printf("invalid vote!");
}
