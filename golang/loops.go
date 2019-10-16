package main

import "fmt"

func main() {
	y,z := 10,22
	//for loop
	fmt.Println("for loop execution ")
	for i := 1; i <= 10; i++ {
		fmt.Println(i)
	}

	fmt.Println() //Prints a blank line

	//if-else loop
	fmt.Println("if-else condition execution")

	if z > 10 {
		fmt.Println("if condition executed")
		fmt.Println("Thus z=",z)

	} else if z<10 {
		fmt.Println("else-if condition executed")
		fmt.Println("Thus z=",z)

	} else {
		fmt.Println("else condition executed")
		fmt.Println("Thus z=",z)
	}

	fmt.Println()
	//Switch Statement Outputs
	fmt.Println("Switch Statement execution")
	switch y+z {
		case 1:
			fmt.Println("Sum = ",y+z)
			fmt.Println("Case 1 executed")
		case 2:
                        fmt.Println("Sum = ",y+z)
                        fmt.Println("Case 2 executed")
		case 3:
                        fmt.Println("Sum = ",y+z)
                        fmt.Println("Case 3 executed")
		default:
			fmt.Println("Entered choice",y+z)
			fmt.Println("Default case executed")
}

}
