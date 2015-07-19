# Find factors

factors = []
even_factors = []
odd_factors = []
prime_factors = []

n = int(raw_input(">"))

for i in range(1,n):

    if n % i == 0:
        factors.append(i)              
        
print factors
             