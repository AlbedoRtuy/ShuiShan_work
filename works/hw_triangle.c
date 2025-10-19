#include<stdio.h>
int a[3];
int main(){
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    int i,j;
    for (i=0;i<3;i++)
       for (j=i+1;j<3;j++)
            if (a[i]>a[j]){
                int t;
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    if (a[0]+a[1]>a[2]) printf("%d\n",a[0]+a[1]+a[2]);
    else printf("不能组成三角形");
    return 0;
}
