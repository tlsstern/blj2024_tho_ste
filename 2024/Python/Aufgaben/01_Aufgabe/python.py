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

calculator()