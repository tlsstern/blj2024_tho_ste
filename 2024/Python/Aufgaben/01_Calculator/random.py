def box():
    i = 0
    print("Welcome to my Box")
    size = int(input("How big of a box would like to create?"))

    while i < size:
        print("x")
        i += 1
        if i > size - 1:
            print("\n")
            for i in size:
                print("x")
                i += 1

box()