package main

func insertSort(data []float64) {
	for i := 0; i < len(data); i++ {
		for j := i; j > 0; j-- {
			if data[j] < data[j-1] {
				swap(data, j, j-1)
			} else {
				break
			}
		}
	}
}
