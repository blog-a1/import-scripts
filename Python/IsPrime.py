def isPrime(n):
    if n == 1:
        return False
    i = 2
    while i * i <= n:
        if n % i == 0:
            return False
        i += 1
    return True

n = int(input('ENTER ANY NUMBER: '))
if(isPrime(n)):
    print(n, "IS A PRIME NUMBER")
else:
    print(n, "IS NOT A PRIME NUMBER")