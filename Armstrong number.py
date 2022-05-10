
print("Enter the number = ")
n = int(input())

temp = n
sum = 0
mul = len(str(n))

while(temp != 0):
    rem = temp % 10
    sum = sum + rem ** mul
    temp = temp //10


if sum == n:
    print(n,"is an armstrong number")
else:
    print(n,"is not an armstrong number")
