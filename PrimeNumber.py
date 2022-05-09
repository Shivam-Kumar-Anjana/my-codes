print("Enter any number to check whether it's prime or not")
n = int(input())

for i in range(2,int(n/2)):
    if( n % i == 0):
      print(n," is not a prime number")
      break

else:
    print(n," is a prime number")
