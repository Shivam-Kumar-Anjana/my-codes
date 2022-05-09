print("For int print 1 and for float print 2")
a=input()

if a==1:
    print("Enter any two nnumber")
    x=int(input())
    y=int(input())

else:
    print("Enter any two number")
    x=float(input())
    y=float(input())    

def subtraction():
    z=x-y 
    print("Subtraction of",x,"and",y,"=",z)

def addition():
    z=x+y 
    print("Addition of",x,"and",y,"=",z)      

def multiplication():
    z=x*y 
    print("multiplication of",x,"and",y,"=",z)    

def division():
    z=x/y 
    print("Division of",x,"and",y,"=",z)   

# if a==1:
print("Enter + for addition")  
print("Enter - for subtraction")
print("Enter * for multiplication")
print("Enter / for division")   
print("Enter your choice=")
ch=input()

if ch == '+':
        addition()
elif ch == '-':
        subtraction()
elif ch == '*':
        multiplication()
else :
        division()

