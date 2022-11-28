number = int(input('Tell me a number: '))

def compare(num):
    if num > 20:
        print (num)
    elif num == 20:
        print('This value is equal to 20')
    else:
        print('This value is less than 20')

print('Your number is {}'.format(number))
compare(number)
        
