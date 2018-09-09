package main

import (
	"fmt"
	"time"
)

var lengths = []int{100, 1000, 10000, 100000}

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

func testInsert() {
	fmt.Printf("\nStarting insert sort\n")
	for i := 0; i < len(lengths); i++ {
		dataSet := generateNums(lengths[i])

		start := time.Now()
		insertSort(dataSet)
		elapsed := time.Since(start)

		fmt.Printf("Time for n=%d %.5fs\n", lengths[i], elapsed.Seconds())
	}
}

func checkSort() {
	fmt.Println("Starting test")

	dataSet := generateNums(10)

	fmt.Println("Before")
	printArray(dataSet)

	insertSort(dataSet)

	fmt.Println("After")
	printArray(dataSet)
}
