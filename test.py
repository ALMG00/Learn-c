# hello for every user that use this calculator

num_1 = float(input("Enter the first number: "))
op = input("Enter the operation (+, -, *, /): ")
num_2 = float(input("Enter the second number: "))

if op == "+":
    result = num_1 + num_2
elif op == "-":
    result = num_1 - num_2
elif op == "*":
    result = num_1 * num_2
elif op == "/":
    result = num_1 / num_2
else:
    result = "Invalid operation"

print(f"The result is: {result}")
