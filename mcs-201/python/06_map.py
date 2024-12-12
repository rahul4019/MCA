# the map() function is a built-in function in python that applies a given function to each
# item of an iterable (ex. list, tuple) and returns a map object (an iterator) containing the
# result

# key features:
# 1. functional programming tool: allows for concise application of a function to all times in
#     an iterable.
# 2. lazy evaluation: returns an iterator and doesn't compute results until explicitly converted
#     to a data structure like a list or tuple


def double(x):
    return x * 2


# apply the function to each element of the list
numbers = [2, 3, 4, 5]
result = map(double, numbers)

# print(f"map object: {result}")

# convert the map object to a list to see the result
# print(list(result))

# same double function with lambda
my_list = [1, 2, 3, 4]
result = map(lambda item: item * 2, my_list)

# print(list(result))

nums = [1, 2, 3, 4, 5, 6]

res = map(lambda x: x * x, nums)
print(list(res))
