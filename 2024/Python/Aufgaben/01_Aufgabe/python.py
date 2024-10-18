def calculator():
    modifier = input("What modifier do you want to use? [+][-][/][*][^][Wurzel]")
    if modifier == "+":
        How_many = int(input("How many numbers do you want to calculate toegther?"))
        i = 0
        sum = 0
        while(i < How_many):
            num1 = int(input("Enter a number"))
            print(sum)
            sum = sum + num1
            print(sum)
            i += 1
        print("Your sum is", sum)



calculator()