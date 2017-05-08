#!/usr/bin/python3


def sumofthreedignums(thesum, themin):
    a = 999
    while a > 99:
        b = 999
        while a * b > themin:
            b -= 1
            if a * b == thesum:
                return True
        a -= 1
    return False


def main():
    thesum = 999 * 999
    themin = 999 * 100 - 1
    while thesum > themin:
        if str(thesum) == str(thesum)[-1::-1]:
            if sumofthreedignums(thesum, themin):
                break
        thesum -= 1
    print(thesum)


if __name__ == "__main__":
    main()
