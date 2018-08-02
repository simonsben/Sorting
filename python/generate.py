import random

def generate_data(num):
    data_set = []
    for i in range(0, num):
        data_set.append(random.random())
    print(data_set)

generate_data(5)
