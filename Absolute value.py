# Calculated the absolute value of a number

def absolute_value(x):

    if x > 0:
        return x
    else:
        return -x
        
n = int(raw_input("Enter a number: "))

print "The absolute value of %d is %d." % (n,absolute_value(n))