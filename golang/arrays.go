package main
import "fmt"
func main(){
	var numbers [3] string
	numbers[0]="Zeroth Index"
	numbers[1]="First Index"
	numbers[2]="Second Index"
	fmt.Println(numbers)
	fmt.Println("Length of numbers array is:",len(numbers))
	slice_numbers := numbers[1:2]

	fmt.Println()
	abc := [...] string {"one","two","three"}
	slice_abc := abc[1:2]

	directions := [...] int {1,2,3,4,5}
	fmt.Println("Directions array:",directions)
	fmt.Println("Length of directions array is:",len(directions))
	fmt.Println(directions[1:4])	//Slicing

	slice_numbers = append(slice_numbers,slice_abc)
	fmt.Println(numbers)
}
