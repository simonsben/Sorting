from numpy import empty_like

def move(list, copy_list, source, target):
    copy_list[target] = list[source]

def merge(data_set):
    copy_array = empty_like(data_set)

def flush_array(data_set, mirror_set, start, end):
    for i in range(start, end):
        mirror_set[i] = data_set[i]

def combine(data_set, mirror_set, index_a, index_b, length_a, length_b):
    end_a, end_b = index_a + length_a, index_b + length_b
    start = index_a if (index_a < index_b) else start = index_b
    end = end_a if(end_a > end_b) else end = end_b
    index = start

    for i in range(start, end):
        if index_a >= end_a or index_b >= end_b:
            start, end = 
            flush_array(data_set, mirror_set, )
        if index_a >= end_a or data_set[index_a] < data_set[index_b]:
            mirror_set[index] = data_set[index_b]
            index += 1
            index_b += 1
        elif index_b >= end_b or data_set[index_a] < data_set[index_b]:
            mirror_set[index] = data_set[index_a]
            index += 1
            index_a += 1
