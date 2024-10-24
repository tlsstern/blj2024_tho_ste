from unicodedata import decimal

def play_again():
    playagain = input("Do you want to play again? [Y/N]")
    if playagain == "Y" or playagain == "y":
        print("\n\n")
        choice()
    else:
        exit(1)

def choice():
    print("Do you want to:\n1. Integer to Binary\n2. Binary to Integer\n3. Exit")
    choice = int(input(""))
    if choice == 1:
        decToBin()
    elif choice == 2:
        BinToDec()
    else:
        exit(1)

def decToBin():
    i = 0
    binary = []
    num = int(input("What number do you want to have as an Binary? "))
    if num == 0:
        print("The binary of 0 is 0")
        play_again()
    while(num > 0):
        binary.append(num % 2)
        num = num // 2
        i += 1
    binary.reverse()
    print("The binary number is: ", *binary, sep="")
    play_again()

def BinToDec():
    i = 0
    num = 0
    binary = input("What Binary number would you like as an Integer? ")
    length = len(binary)
    for nums in binary:
        if nums == "0":
            length -= 1
        elif nums == "1":
            num += 2**length
            length -= 1
        else:
            print("This is not a binary number!")
    num = num / 2
    print(num)
    play_again()


choice()