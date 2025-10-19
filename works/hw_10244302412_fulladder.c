#include<stdio.h>
typedef struct{
    int sum;
    int carry;
} BIT;
BIT half_adder(int a,int b){
    return (BIT){a^b,a&b};
}
BIT full_adder(int a,int b,int c){
    BIT v1=half_adder(a,b);
    BIT v2=half_adder(v1.sum,c);
    return (BIT){v2.sum,v1.carry|v2.carry};
}
int two_adder(int A0,int A1,int B0,int B1){
    BIT v0=half_adder(A0,B0);
    BIT v1=full_adder(A1,B1,v0.carry);
    return v1.carry*100+v1.sum*10+v0.sum;
}
int main(){
    printf("11+11=%d\n",two_adder(1,1,1,1));
    printf("10+01=%d\n",two_adder(1,0,0,1));
    return 0;
}
