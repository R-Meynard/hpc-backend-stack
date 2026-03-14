import math
import random
import sys

if __name__ == '__main__':
    print("Give a number: ")
    n = int(input().strip())
    if(n%2 != 0):
        print("Weird")
    elif((n%2 == 0) and ((n<=5)and(n>=2))):
        print("Not Weird")
    elif((n%2 == 0) and ((n<=20)and(n>=6))):
        print("Weird")   
    elif((n%2 == 0) and (n>=20)):
        print("Not Weird")  