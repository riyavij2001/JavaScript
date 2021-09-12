import random

def gameWin(comp , you):
    if comp == you:
        return None
    elif comp == 's':
        if you == 'w':
            return False
        elif you == 'g':
            return True
    elif comp == 'w':
        if you == 's':
            return True
        elif you == 'g':
            return False
    elif comp == 'g':
        if you == 's':
            return False
        elif you == 'w':
            return True


print("Comp Turn: Snake(s) Water(w) or Gun(g)?")
ranNo = random.randint(1, 3)
if ranNo == 1:
    comp = 's'
elif ranNo == 2:
    comp = 'w'
elif ranNo == 3:
    comp = 'g'

you = input("Your Turn: Snake(s) Water(w) or Gun(g)?")

a = gameWin(comp, you)

print(f"Computer choose {comp}")
print(f"You choose {you}")

if a == None:
    print("The game is tie!")
elif a: 
    print("You win")
else:
    print("You loose")

