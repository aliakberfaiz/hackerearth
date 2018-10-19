#LINK - https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
l = int(input())
if( l<1 or l>10000 ) :
	sys.exit(0)
n = int(input())
if( n<1 or n>1000 ):
	sys.exit(0)
while( n>0 ) :
	w,h = input().split(" ")
	w,h = int(w),int(h)
	if( w<=10000 and h<=100000 and w>=1 and h>=1) :
		if( w<l or h<l) :
			print("UPLOAD ANOTHER")
		elif( w==h ) :
			print("ACCEPTED")
		elif( w>l or h>l ) :
			print("CROP IT")
	n=n-1
