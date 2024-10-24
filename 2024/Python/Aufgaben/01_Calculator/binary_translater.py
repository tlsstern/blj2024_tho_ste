from unicodedata import decimal


def choice():
    print("Do you want to:\n1. Decimal to Binary\n2. Binary to Decimal\n3. Exit")
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
    num = int(input("What number do you want to have in Binary? "))
    while(num > 0):
        binary.append(num % 2)
        num = num // 2
        i += 1
    binary.reverse()
    print("The binary number is: ", *binary, sep="")

def BinToDec():
    i = 0
    Decimal = 0
    binary = int(input("What Binary number would you like in Decimal? "))
    length = len(binary)
    for num in binary:
        if num == 0:
            length -= 1
        elif num == 1:
            Decimal += 2**length
            length -= 1
        else:
            print("This is not a binary number!")


choice()