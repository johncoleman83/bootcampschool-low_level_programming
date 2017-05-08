#!/usr/bin/python3


def main():
    maxsum = 999 * 999
    while str(maxsum) != str(maxsum)[-1::-1]:
        maxsum -= 1
    print(maxsum)


if __name__ == "__main__":
    main()
