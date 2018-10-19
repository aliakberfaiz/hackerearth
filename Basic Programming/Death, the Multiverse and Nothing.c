// LINK - https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/death-the-multiverse-and-nothing/

#include <stdio.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    if(n>10 || n<1)
     return 0;
    for(;n>0;n--)
    {
    	scanf("%d",&a);
    	printf("%d\n",a-1);
    }
    return 0;
}
