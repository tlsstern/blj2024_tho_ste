def calculator():
    modifier = input("What modifier do you want to use? [+][-][/][*][^][Wurzel]\n")
    if modifier == "+":
        addition()
    elif modifier == "-":
        subtraction()
    elif modifier == "/":
        division()
    elif modifier == "*":
        multiplication()
    elif modifier == "^":
        power()
    elif modifier == "Wurzel" or modifier == "wurzel":  # Corrected the condition here
        root()
    else:
        print("Invalid modifier")
        calculator()

def addition():
    while True:
        try:
            How_many = int(input("How many numbers do you want to calculate together?\n"))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")
    i = 0
    sum = 0
    while(i < How_many):
        while True:
            try:
                num1 = int(input("Enter a number\n"))
                break
            except ValueError:
                print("Invalid input. Please enter a number.")
        sum += num1
        i += 1
    print("Your sum is", sum)
    play_again()

def subtraction():
    while True:
        try:
            How_many = int(input("How many numbers do you want to calculate together?\n"))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")
    i = 0
    while True:
        try:
            result = int(input("What would you want to be your first number?\n"))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")
    print("Starting with:", result)
    while i < How_many - 1:
        while True:
            try:
                num = int(input("Enter a number to subtract\n"))
                break
            except ValueError:
                print("Invalid input. Please enter a number.")
        result -= num
        i += 1
    print("Your result is", result)
    play_again()

def division():
    while True:
        try:
            How_many = int(input("How many numbers do you want to subtract from the first number?\n"))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")
    i = 0
    while True:
        try:
            result = int(input("What would you want to be your first number?\n"))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")
    print("Starting with:", result)
    while i < How_many:
        while True:
            try:
                num = int(input("Enter a number to divide\n"))
                break
            except ValueError:
                print("Invalid input. Please enter a number.")
        result = result / num
        i += 1
    print("Your result is", result)
    play_again()

def multiplication():
    while True:
        try:
            How_many = int(input("How many numbers do you want to multiply together?\n"))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")
    i = 0
    result = 1
    while(i < How_many):
        while True:
            try:
                num1 = int(input("Enter a number\n"))
                break
            except ValueError:
                print("Invalid input. Please enter a number.")
        result = result * num1
        i += 1
    print("Your result is", result)
    play_again()

def power():
    while True:
        result = 0
        try:
            first_number = int(input("Whats your first number?\n"))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")
    while True:
        try:
            exponent = int(input("Whats your exponent?\n"))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")

    result = first_number ** exponent

    print("Your result is", result)
    play_again()

def root():
    while True:
        result = 0
        try:
            first_number = int(input("Of which number do you want to find out the root?\n"))
            break
        except ValueError:
            print("Invalid input. Please enter a number.")
    result = first_number **(1/2)

    print("Your result is", result)
    play_again()

def play_again():
    answer = input("Do you want to play again?\nPress 1 if yes\nPress anything if no\n")
    if answer == 1:
        calculator()
    else:
        exit(1)


calculator()