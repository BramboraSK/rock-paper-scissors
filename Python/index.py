import random

allowed = "RPS";
winning = [["R", "S"], ["S", "P"], ["P", "R"]]
answer = ""

def main():
    choice = input("Rock paper scissors!\nEnter your choice (R/P/S or q to exit): ").upper();
    computerChoice = allowed[random.randint(0, len(allowed) - 1)]

    if choice == 'Q':
        exit()
    elif choice == computerChoice:
        answer = "Tie!"
    elif [choice, computerChoice] in winning:
        answer = "You win!"
    elif choice in allowed:
        answer = "You lose!"
    else:
        answer = "Invalid input!\n"

    if choice in allowed:
        answer += " The computer chose " + computerChoice + "!\n"

    print(answer)
    main()

main()