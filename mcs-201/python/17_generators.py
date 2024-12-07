# generator is a simple way to creat iterator
# ex:

# generators are a type of iterable in python that allow you to iterate over a sequence of values
# one at a time without storing the entire sequence in the memory. they are created using a function
# with the yield keyword. when the generation function is called, it does not execute the function
# body immediately: instead, it returns a generator object. The yield keyword pauses the function
# , saving its state, and resumes it from where it left off when the generator is iterated


def my_generator():
    yield 1
    yield 2
    yield 3
    yield 4


# when we call my_generator(), it returns generator object

generator = my_generator()

print(next(generator))
print(next(generator))
print(next(generator))
print(next(generator))

# list vs generators

# 1. generators are memory effiecient because they produce items on the fly and do not store the
# sequence in the memory | lists store all the data in the memory which can be inefficient for
# large dataset

# 2. generators can be iterated once | lists can be generated multiple times
#
# 3. ideal for processing large datasets or streams | suitable for small datasets where random
# access is needed.

# utility of generators
# 1. memory efficient: generators are particularly usefuls when dealing with large datasets
# or infinite sequence becuase they do not store all the values in the memeory

# 2. pipeline processing: generators can be used to create data pipelines where data flows
# between multiple processing steps without intermediate storage

# 3. readable code: they simplify code for scenarios like reading large files line by line

# ex:


def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        yield a
        a = b
        b = a + b


for num in fibonacci(5):
    print(num)
