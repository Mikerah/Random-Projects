# Find factors

n = int(raw_input(">"))

def factorization(n):
    factors = []

    for i in range(1,n):

        if n % i == 0:
            factors.append(i)              
    return factors
    
print factorization(n)
             