def half_adder(a,b):
    sum=a^b
    carry=a&b
    return sum,carry
def full_adder(a,b,c):
    sum0,carry0=half_adder(a,b)
    sum1,carry1=half_adder(sum0,c)
    sum2,carry2=sum1,carry0|carry1
    return sum2,carry2
def two_adder(A0,A1,B0,B1):
    sum0,carry0=half_adder(A0,B0)
    sum1,carry1=full_adder(A1,B1,carry0)
    return carry1*100+sum1*10+sum0
result1=two_adder(1,1,1,1);
print("11+11=",result1)
result2=two_adder(1,0,0,1);
print("01+10=",result2)
