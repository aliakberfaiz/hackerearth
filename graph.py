N,E = [int (x) for x in input().split()]
Arr = [[0]*N for x in range(N)]

for i in range(E):
 u,v = [int (x) for x in input().split() ]
 u = u-1
 v =v-1
 Arr[u][v]=1
 Arr[v][u]=1
 
    
Q = int(input())
for i in range(Q):
 u,v = [int (x) for x in input().split() ]
 u=u-1
 v=v-1
 if(Arr[u][v]==1 ):
  print('YES')
 else:
  print('NO')