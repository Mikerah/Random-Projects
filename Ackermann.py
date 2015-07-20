# Calculates the ackermann function.
# Note: this function grows REALLY REALLY fast.

def ackermann(m,n):

    if m == 0:
        return n + 1
    elif m > 0 and n == 0:
        return ackermann(m-1, 1)
    else:
        return ackermann(m-1, ackermann(m, n-1))
        
print "This program calculates the ackermann function of two numbers."
print "This functions grows really fast."
m = int(raw_input("Enter the first number: "))
n = int(raw_input("Enter the second number: "))

print " A(%d, %d) = %d." % (m,n,ackermann(m,n))