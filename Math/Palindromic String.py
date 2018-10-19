# LINK - https://www.hackerearth.com/problem/algorithm/trailing-zeros/

n = int(input())
test = 5
zero = 0
while( n>=test ) :
	zero = zero + int(n/test)
	test = test*5
print(zero)
