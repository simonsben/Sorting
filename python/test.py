from utility import generate_data, average
from linear import linear_sort, linear_inline_sort
from time import time

times = []
num_tests = 1000000

for i in range(num_tests):
    set = generate_data(5)

    end_index = len(set) - 1

    start = time()
    # linear_inline_sort(set, 0, end_index)
    linear_sort(set)
    end = time()

    times.append(end - start)

print('Average time: ' + str(average(times)))
