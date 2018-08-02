from utility import generate_data
from linear import linear_sort
from time import time

times = []
data_lengths = [10, 100, 1000, 10000, 50000]

for length in data_lengths:
    data_set = generate_data(length)

    start = time()
    linear_sort(data_set)
    end = time()

    times.append(end - start)
    print('Done set of length ' + str(length))

print('Times:')
print(data_lengths)
print(times)
