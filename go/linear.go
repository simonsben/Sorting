package main

func linearSort(data []float64) {
	for i := 0; i < len(data); i++ {
		min := i
		for j := i + 1; j < len(data); j++ {
			if data[min] > data[j] {
				min = j
			}
		}
		if min != i {
			swap(data, min, i)
		}
	}
}
