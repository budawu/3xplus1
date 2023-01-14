fn threexp1(mut x: isize) {
    while x != 1 {
        if x % 2 == 0 {
            x = x / 2;
            println!("{0}", x);
        } else {
            x = 3 * x + 1;
            println!("{0}", x);
        }
    }
    println!("OK");
}

fn main() {
    threexp1(27);
}
