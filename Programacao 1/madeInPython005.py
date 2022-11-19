from math import sqrt

num = float(input("Tell me a number: "))

def square(num):
    squarenum = num * num
    return squarenum

def squareroot(num):
    squarer = sqrt(num)
    return squarer

print("Your number: ")
print(num)
print("The square of a number: ")
res = square(num)
print(res)
print("The square root of a number: ")
res2 = squareroot(num)
print(res2)

