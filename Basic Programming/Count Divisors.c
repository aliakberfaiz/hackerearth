// LINK - https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/

#include <stdio.h>

int main()
{
    int l,r,k,count=0;
    scanf("%d %d %d",&l,&r,&k);
    l=l+(l%k);
    for(;l<=r;l=l+k)
    count++;
    /*for(;l<=r;l++)
    if(l%k==0)
    count++;*/
    printf("%d",count);
    return 0;
}
