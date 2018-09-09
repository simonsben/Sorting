package main

import (
	"fmt"
	"time"
)

var lengths = []int{100, 1000, 10000, 100000}

func main() {
	fmt.Printf("Starting tests")
	testLinear()
	testBubble()
}

func testBubble() {
	fmt.Printf("\nStarting bubble sort\n")
	for i := 0; i < len(lengths); i++ {
		dataSet := generateNums(lengths[i])

		start := time.Now()
		bubbleSort(dataSet)
		elapsed := time.Since(start)

		fmt.Printf("Time for n=%d %.5fs\n", lengths[i], elapsed.Seconds())
	}
}

func testLinear() {
	fmt.Printf("\nStarting linear sort\n")

	for i := 0; i < len(lengths); i++ {
		dataSet := generateNums(lengths[i])

		start := time.Now()
		linearSort(dataSet)
		elapsed := time.Since(start)

		fmt.Printf("Time for n=%d %.5fs\n", lengths[i], elapsed.Seconds())
	}
}
