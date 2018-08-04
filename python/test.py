from utility import generate_data
from bubble import bubble_sort
from time import time

data_set = generate_data(15)

bubble_sort(data_set)
print(data_set)
