print("Swapping in list")

def swapping(list,p1,p2):
    list[p1],list[p2] = list[p2],list[p1]
    return list



list = [11,23,45,67,78]

print("List before swapping : ",list)

print("Enter the positions where you wanna swap : ")
pos1 = int(input())
pos2 = int(input())

l = swapping(list,pos1-1,pos2-1)
print("List after swapping : ",l)
