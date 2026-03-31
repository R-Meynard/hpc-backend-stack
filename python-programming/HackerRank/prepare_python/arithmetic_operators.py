def sumNumbers(x, y):
    return x + y

def substractionNumbers(x, y):
    return x - y

def productNumbers(x, y):
    return x * y

if __name__ == '__main__':
    print("Give a number for a: ")
    a = int(input())
    print("Give a number for b: ")
    b = int(input())

    resultSum = sumNumbers(a,b)
    resultSubstraction = substractionNumbers(a,b)
    print("Result of the product of a and b: ")
    resultProduct = productNumbers(a,b)

    print("Result of sum of a and b: " + str(resultSum))
    print("Result of the subtraction of a and b: " + str(resultSubstraction))
    print("Result of the product of a and b: " + str(resultProduct))