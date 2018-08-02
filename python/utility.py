from numpy import random

def generate_data(num):
    return random.rand(num)

def generate_int(num, end):
    return random.randint(0, end, num)

def swap(set, a, b):
    hold = set[a]
    set[a] = set[b]
    set[b] = hold
