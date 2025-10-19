#include<stdio.h>
int main(){
    for (int i=100;i<=130;i++){
        int sum=0;
        int tmi=i;
        while (tmi) sum+=(tmi%10),tmi/=10;
        if (sum % 2==0)
           printf("%d\n",i);
    }
    return 0;
}