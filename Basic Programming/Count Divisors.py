# LINK - https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/

l,r,k=input().split(" ")
l,r,k=int(l),int(r),int(k)
count = 0
while ( l <= r ):
    if( l%k == 0 ):
    	count = count + 1
    l = l + 1
print(count);
    
#return 0;