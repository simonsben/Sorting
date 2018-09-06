package sort

import (
	"fmt"
)

// const lengths = []int{10}
const length int = 10

func main() {
	dataSet := generateNums(length)
	fmt.Printf("Before")
	printArray(dataSet)
	linearSort(dataSet)

	fmt.Printf("After")
	printArray(dataSet)
}
