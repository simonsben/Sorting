from utility import swap

def linear_sort(data_set):
    for i in range(len(data_set)):
        min, min_value = i, data_set[i]
        # min_value = data_set[i]
        for j in range(i + 1, len(data_set)):
            if min_value > data_set[j]:
                min = j
                min_value = data_set[j]

        if i != j:
            swap(data_set, min, i)
