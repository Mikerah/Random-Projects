# Find factors

factors = []

n = int(raw_input(">"))

for i in range(1,n):

    if n % i == 0:
        factors.append(i)              
        
print factors
             