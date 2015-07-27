# Recursively computer towers of hanoi

def tower_of_hanoi(n):

    if n == 1:
        return 1
    else:
        return 2 * tower_of_hanoi(n-1) + 1

print "This program computes the number of steps required to solve a particulat towers of hanoi problem."      
n = int(raw_input("Enter a number:"))

print "The number of steps required for %d disks is %d." % (n,tower_of_hanoi(n))