t = int(input())
while t!=0:
    n, x = [int(x) for x in input().split()] 
    t= t-1
    if n == 1 or n==2:
        print(1)
    else:
        print(int(n/x)+1)