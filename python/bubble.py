from utility import swap

def bubble_sort(data_set):
    for i in range(len(data_set)):
        change = False

        for j in range(len(data_set) - 1, i, -1):
            if(data_set[j] < data_set[j-1]):
                swap(data_set, j, j-1)
                change = True

        if(not change):
            break
