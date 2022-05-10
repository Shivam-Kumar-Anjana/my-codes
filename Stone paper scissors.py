
import random

print("Stone Paper Scissor Game!!!!!!!")

list = ["stone","paper","scissor"]

def check():
    
    user1 = random.choice(list)
    print("User_1 = ",user1)
    user2 = random.choice(list)
    print("User_2 = ",user2)
    
    if user1 == user2:
        print("No winner")
    elif user1 == "stone" and user2 == "paper":
        print("USER_2 WINS!!!")
    elif user1 == "stone" and user2 == "scissor":
        print("USER_1 WINS!!!")
    elif user1 == "paper" and user2 == "stone":
        print("USER_1 WINS!!!")
    elif user1 == "paper" and user2 == "scissor":
        print("USER_2 WINS!!!")
    elif user1 == "scissor" and user2 == "paper":
        print("USER_1 WINS!!!")
    elif user1 == "scissor" and user2 == "stone":
        print("USER_2 WINS!!!")
    else:
        print("Invalid user entry!!!")


def again():
    print("Do you want to play again???")
    print("press Y for yes \npress N for no") 
    ch = input()

    if ch == 'Y':
        check()
        again()  
    else:
        print("GAME IS OVER")
        
    

check()
again()
