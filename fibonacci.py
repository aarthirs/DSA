#
#Input: 6

#Output: 8

#Explanation: The number is ‘6’ so we have to find the “6th” Fibonacci number.So by using the given formula of the Fibonacci series, we get the series:    [ 1, 1, 2, 3, 5, 8, 13, 21]So the “6th” element is “8” hence we get the output.
#

def fib(n):
    if (n==1) or (n==2):
        return 1 
    prev, curr=1,1,
    for _ in range(3,n+1):
        prev,curr=curr, prev+curr
    return curr    
n=int(input())
print(fib(n))
