# Calculating pi to the nth decimal using the Madhava-Leibniz Series

from math import sqrt

print "This program can approximate pi to up to 10 decimal places."
decimal_places = int(raw_input("Enter the number of decimal places for pi: "))
if decimal_places > 10:
    raise RuntimeError("This program approximates pi to up to and including 10 decimal places.") 

def madhava_leibniz(n):
    total = 0
    for i in range(n+10):
        total += ((-1./3.)**i)/(2.*i+1)
        #print total
        
    return sqrt(12) * total

print "Pi to %d decimal places is %.10f." % (decimal_places, madhava_leibniz(decimal_places))