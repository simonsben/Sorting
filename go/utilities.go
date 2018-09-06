package sort

import (
	"fmt"
	"math/rand"
)

func generateNums(count int) []float64 {
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
	for i := 0; i < len(dataSet); i++ {
		fmt.Printf("%f", dataSet[i])
	}
}
