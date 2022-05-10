print("Enter the number you want all divisors of")
n = int(input())

print("Divisors of ",n,"are")

for i in range(1,n+1):
    if n%i == 0:
        print(i,end=" ")
