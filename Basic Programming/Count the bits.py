# LINK - https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/count-the-bits/

t = int(input())
while ( t>0 ) :
	n = int(input())
	a = 0
	while ( n>0 ) :
		a = a + int( n%2 )
		n = int(n/2)
	print(a)	
	t = t-1