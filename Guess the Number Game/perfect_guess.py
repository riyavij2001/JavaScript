import random
randnumber = random.randint(1,100)


userGuess = None
guesses = 0

while(userGuess != randnumber):
    userGuess = int(input("Enter your guess (1-100): "))
    guesses += 1
    if(userGuess == randnumber):
        print("You Guessed it Right!")
    else:
        if(userGuess>randnumber):
            print("You guesses it wrong! Enter a Smaller Number: ")
        else:
            print("You  Gussed it Wrong! Enter a Larger Number: ")
    

print(f"You guessed the number in {guesses} guesses")
with open("High-Score.txt", "r") as f:
    highscore = int(f.read())

if(guesses<highscore):
    print("You have just broken the High-Score")   
    with open("High-Score.txt", "w") as f:
        f.write(str(guesses))