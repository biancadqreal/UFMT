from math import sqrt

n1 = float(input('Tell me a number: '))

def compare(number):
    if number > 0:
        return sqrt(number)
    else:
        return n1*n1
        
print(compare(n1))
        
    
