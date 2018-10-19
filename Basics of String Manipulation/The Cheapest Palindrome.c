//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/make-the-cheapest-palindrome-1/
#include <stdio.h>
int strrev(char a[],int acost,int bcost,int j)
{
    
    int i=0,cost=0;
    j=j-1;
    
    while(i<j)
    {
        //printf("\n\t%d",i);
if(a[i]=='/')
            {
                a[i]=a[j];
                if(a[j]=='a')
                {cost=cost+acost;
                //printf("a added in front=%d\n\t",cost);
                    
                }
                
                
               else if(a[j]=='b')
               {
                   cost=cost+bcost;
                 //printf("b added in front =%d\n\t",cost);
                } 
                else if(a[j]='/')
                {
                    if(acost<=bcost)
                    {
                    a[i]='a';
                    a[j]='a';
                    cost=cost+2*acost;
                    //printf("a added in both =%d\n\t",cost);
                    }
                    else if(bcost<acost)
                    {
                        a[i]='b';
                        a[j]='b';
                        cost=cost+2*bcost;
                        //printf("b added in both =%d\n\t",cost);
                    }
                }
                
            }
else if(a[j]=='/')
            {
                a[j]=a[i];
                if(a[i]=='a')
                {cost=cost+acost;
                //printf("a added=%d\n\t",cost);
                    
                }
                
                
               else if(a[i]=='b')
               {
                   cost=cost+bcost;
                 //printf("b added =%d\n\t",cost);
                } 
            }
        i++;
        j--;
     }
     
    char b[100000];
    strcpy(b,a);
    j=strlen(a)-1;
    i=0;
   while (i<=j)
   {
      b[j]=a[i];
      b[i]=a[j];
      i++;
      j--;
    }
    if(strcmp(a,b)==0)
    return cost;
    else 
    return -1;
}

int main()
{
    int cost,l,T,i,acost,bcost;
    char a[100000];
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%s",&a);
        scanf("%d",&acost);
        scanf("%d",&bcost);
        cost =strrev(a,acost,bcost,strlen(a));
        printf("%d\n",cost);
    }
    return 0;
}
