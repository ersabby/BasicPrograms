package main
import "fmt"

func main(){

	//declaring the variables
	//Syntax: var <variable_name> <type> = <value>
	var x int
	x=3
	fmt.Println("x:",x)

	//single line declaration
	var y int = 3
	fmt.Println("Single line declaration value: ",y)

	//declaration excluding the datatype(int)
	var c=3
	fmt.Println("Excluding (int) value: ", c)

	//multiple declarations (Strings are declared normally)
	var i, j=100, "Hello sabby"
	fmt.Println("Multi-variable declaration value of i and j",i,j)

	//declaration without using the keyword 'var' i.e using ":="
	//':=' is used only to assign value to new variables
	//':=' Cannot be used to assign value to pre-declared value
	a := 017
	fmt.Println("Without var and datatype a =",a)

	//Constants: Variable whose value remains same once declared
	const b=001
	fmt.Println("Constant value b:",b)
}
