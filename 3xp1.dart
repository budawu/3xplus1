void threexp1(var x) {
    while (x != 1) {
        x = x % 2 == 0 ? x ~/ 2 : 3 * x + 1;
        print(x);
    }
    print("OK");
}
void main() {
    threexp1(27);
}
