def threexp1(x: int):
    while x != 1:
        x = x // 2 if x % 2 == 0 else 3 * x + 1
        print(x)
    print('OK')

if __name__ == "__main__":
    threexp1(27)
