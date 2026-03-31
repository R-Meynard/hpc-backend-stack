def squareNumbersInferiorN(number):
    for i in range(number):
        print(i*i)
if __name__ == '__main__':
    print("Give a number for n: ")
    n = int(input())
    print("Displayed the square for each number less than " + str(n) + " : ")
    squareNumbersInferiorN(n)