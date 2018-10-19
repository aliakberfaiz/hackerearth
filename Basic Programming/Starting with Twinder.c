// LINK - https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/starting-with-twinder/

#include <stdio.h>

int main()
{
	int l,w,h,n;
	scanf("%d",&l);
	if(l<1 || l>10000)
 	return 0;
 	scanf("%d",&n);
 	if(n<1 || n>1000)
 	return 0;
	for(;n>0;n--)
	{
		scanf("%d%d",&w,&h);
		if(w<=10000 && h<=100000 && w>=1 && h>=1)
		{
			if (w<l || h<l)
			printf("UPLOAD ANOTHER");
			else if(w==h)
			printf("ACCEPTED");
			else if(w>l || h>l)
			printf("CROP IT");
		printf("\n");
			
		}
		
		
	}
}    
