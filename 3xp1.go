package main

import "fmt"

func threexp1(x int) {
	//var ans int = x

	for x != 1 {
		if (x % 2) == 0 {
			x = x / 2
			fmt.Println(x)
		} else {
			x = 3*x + 1
			fmt.Println(x)
		}

	}
}

func main() {
	threexp1(12)
}
