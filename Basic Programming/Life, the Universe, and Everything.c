// LINK - https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/life-the-universe-and-everything/

#include <stdio.h>

int main()
{
    int n;
    A:scanf("%d",&n);
    if(n==42)
    return 0;
    else 
    {printf("%d\n",n);
    goto A;}
    return 0;
}
