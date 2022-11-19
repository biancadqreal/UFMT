def add(num, num2):
    addition = num + num2
    return addition

def multiply(num, num2):
    multiply = num * num2
    return multiply

num = int(input("Tell me a number: "))
num2 = int(input("Tell me another number: "))

res = add(num, num2)
res2 = multiply(num, num2)
print("Added numbers: ")
print(res)
print("Multiplied numbers: ")
print(res2)
