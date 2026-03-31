if __name__ == '__main__':
    print("Give a number for x: ")
    x = int(input())
    print("Give a number for y: ")
    y = int(input())
    print("Give a number for z: ")
    z = int(input())
    print("Give a number for n: ")
    n = int(input())

    mat = []
    ncoordinate = (x+y+z)*n

    cxzi = []
    for i in range(3):
        zi = 0
        for ii in range(z):
            cxzi.append([i, 0, zi])
            zi = zi + 1

    print(cxzi)
