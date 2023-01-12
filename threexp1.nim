proc threexp1(x: int) =
    var x: int = x
    while x != 1:
        if x mod 2 == 0:
            x = x div 2
            echo x
        else:
            x = 3 * x + 1
            echo x
    echo "OK"

threexp1(27)