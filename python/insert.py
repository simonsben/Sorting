from utility import swap

def ripple(set, start, end):
    for i in range(end - 1, start, -1):
        set[i] = set[i - 1]

def insert_sort(data_set):
    for i in range(1, len(data_set)):
        val = data_set[i]
        for j in range(i, 0, -1):
            if(val < data_set[j]):
                ripple(data_set, j+1, i)
