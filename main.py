def add(x,y):
    return(x+y)
def subtract(x,y):
    return(x-y)
def multiply(x,y):
    return(x*y)
def divide (x,y):
    if y != 0:
        return x / y
    else:
        return "Error! Division by zero is not allowed."

print("""1. Add
2. Subtract
3. Multiply
4. Divide""")

user_input = int(input("Enter choice:  "))

if 1<= user_input <= 4 :
    x = int(input("Enter 1st no:  "))
    y = int(input("Enter 2nd no:  "))
else:
    print("Invalid")
    

if user_input == 1 :
    print(add(x , y ))

elif user_input == 2:
    print(subtract(x, y))

elif user_input == 3 :
    print(multiply(x, y))

elif user_input == 4:
    print(divide(x, y))

else :
    print("Error, Please restart the program")

