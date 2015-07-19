# Calculating e to nth decimal place
from math import factorial

def e_approximation(n):

    total = 0
    for i in range(n):
        total += 1.0/factorial(i)
        
    return total
    
print "This program approximates e to up to 10 decimal places."
dec_places = int(raw_input("How precise do you want e to be: "))

print "e to %d decimal places is %.10f." % (dec_places, e_approximation(dec_places))