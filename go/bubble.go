package main

func bubbleSort(data []float64) {
	for i := len(data) - 1; i > 0; i-- {
		lastSwap := i
		noSwap := true

		for j := 0; j < i; j++ {
			if data[j] > data[j+1] {
				swap(data, j, j+1)

				if noSwap {
					lastSwap = j
				}
				noSwap = false
			}
		}

		if noSwap && lastSwap != i {
			i = lastSwap
		}
	}
}
