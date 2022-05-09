s1 = input("Enter your string : ")
rev = ""

for i in range(len(s1)-1,-1,-1):
    rev = rev + s1[i]

print("Reverse of entered string : ",rev)

# OR

s2=input("enter your name : ")[::-1]
print(s2)

# OR

s3 = input("Enter your name : ")
s3 = s3[::-1]
print(s3)
