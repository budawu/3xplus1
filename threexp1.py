def threexp1(x: int):
    while x != 1:
        if x % 2 == 0:
            x = x // 2
            print(x)
        else:
            x = 3 * x + 1
            print(x)
    print('OK')

def main():
    threexp1(27)

if __name__ == "__main__":
    main()
