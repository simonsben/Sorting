from linear import linear_sort
from bubble import bubble_sort
from utility import generate_data
from time import time
from copy import deepcopy

data_lengths = [10, 100, 1000, 10000]
times = []

for length in data_lengths:
    data_set = generate_data(length)
    round_time = []

    linear_set = deepcopy(data_set)
    bubble_set = deepcopy(data_set)

    linear_start = time()
    linear_sort(linear_set)
    linear_end = time()
    round_time.append(linear_end - linear_start)

    bubble_start = time()
    bubble_sort(bubble_set)
    bubble_end = time()
    round_time.append(bubble_end - bubble_start)

    times.append(round_time)


print('Times:')
print(times)
