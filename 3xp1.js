function threexp1(x) {
    while (x != 1) {
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = 3 * x + 1;
        }
        console.log(x);
    }
    console.log("OK");
}

threexp1(27);
