def integerDivision(x,y):
    return int(x//y)

def floatDivision(x,y):
    return float(x/y)

if __name__ == '__main__':
    print("Give a number for a: ")
    a = int(input())
    print("Give a number for b: ")
    b = int(input())

    resultIntegerDivision = integerDivision(a,b)
    resultFloatDivision = floatDivision(a,b)

    print("Integer value of the division of a and b: " + str(resultIntegerDivision))
    print("Float value of the division of a and b: " + str(resultFloatDivision))

