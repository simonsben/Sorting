package main

import (
	"fmt"
	"math/rand"
	"time"
)

func generateNums(count int) []float64 {
	rand.Seed(time.Now().UTC().UnixNano())
	dataSet := make([]float64, count)

	for i := 0; i < count; i++ {
		dataSet[i] = rand.Float64()
	}

	return dataSet
}

func swap(dataSet []float64, a, b int) {
	var hold = dataSet[a]
	dataSet[a] = dataSet[b]
	dataSet[b] = hold
}

func printArray(dataSet []float64) {
	fmt.Printf("\nPrinting slice:\n")
	for i := 0; i < len(dataSet); i++ {
		fmt.Printf("%f\n", dataSet[i])
	}
}
