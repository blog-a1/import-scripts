def isLeapYear(n):
    if n % 400 == 0:
        return True
    elif n % 4 == 0 and n % 100 != 0:
        return True
    else:
        return False
year = int(input('ENTER A YEAR IN YYYY FORMAT: '))
if(isLeapYear(year)):
    print(year, 'IS A LEAP YEAR')
else:
    print(year, 'IS NOT A LEAP YEAR')
