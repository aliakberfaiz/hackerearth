// LINK - https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/

#include <stdio.h>
#include <string.h>

int main()
{
  char s[100];
  int i;
  scanf("%s",&s);
  if (strlen(s)>100 || strlen(s)<1)
  return 0;
  for(i=strlen(s)-1;i>=0;i--)
  {if(s[i]>='A' && s[i]<='Z')
  s[i]+=32;
  else if(s[i]>='a' && s[i]<='z')
  	s[i]-=32;
  }
  printf("%s",s);
}