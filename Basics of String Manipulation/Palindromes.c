//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/palindromes-3/
#include <stdio.h>
//recursive palindrome check and trimming if not 
int palindromecutter(char a[])
{
char b[1000001];
int i=0,j,temp;

j=strlen(a)-1;
if(j+1==1)
return 0;
b[j+1]='\0';
temp=j;
while(i<=j)
{
	b[i]=a[j];
	b[j]=a[i];
	i++;
	j--;
}
if(strcmp(b,a)==0)
{
	a[temp]='\0';
	//printf("%s\n",a);
	return palindromecutter(a);
}
else 
return temp+1;
}

int main()
{
  	char a[1000001];
  	int ans;
  	scanf("%s",&a);
  	ans=palindromecutter(a);
  	printf("%d",ans);
    return 0;
}
