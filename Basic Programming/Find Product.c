// LINK - https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/

#include <stdio.h>
 
int main()
{
    long int n,i=0;
    long long int p=1;
    scanf("%ld",&n);
    long int a[n];
    while (i < n && scanf("%ld", &a[i]) == 1)
    i++;
    for(i=0;i<n;i++)
    p=p*a[i]%1000000007;
    printf("%lld",p);
}