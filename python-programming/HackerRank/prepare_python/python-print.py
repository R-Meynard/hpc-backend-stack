def listIntegerUntilN(number):
    print(*range(1, number+1), sep='')

if __name__ == '__main__':
    print("Give a number for n: ")
    n = int(input())
    listIntegerUntilN(n)