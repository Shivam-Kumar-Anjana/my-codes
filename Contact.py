
print("class for phone book")

class contact:
    def __init__(self,name,address,phone_no):
            self.name=name
            self.phone_no=phone_no
            self.address=address
    def postdata(self):
            f=open("phone.txt","a")
            pno=str(self.phone_no)
            p1=[self.name,self.address,pno]
            for i in range(0,len(p1)):
                f.write(p1[i])
                f.write(",")
            f.close()
def getdata():
    f=open("phone.txt","r")
    l=f.read()
    f.close()
    return l
num=int(input("how many entries you want:"))
for i in range(num):
    name1=input("Please enter the name",i,":")
    addr1=input("Please enter the address",i,":")
    no1=int(input("Please enter the number",i,":"))
    p=contact(name1,addr1,no1)
    p.postdata()
l=getdata()
print("data is :\n")
l1=l.split(",")
print("NAME   |   ADDRESS   |   NUMBER")
print("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ")
n=1
for i in l1:
    if(n<3):
        print("|",i," ",end="")
        n+=1
    else:
        print("|",i,"\n")
        print("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ ")
        n=1
