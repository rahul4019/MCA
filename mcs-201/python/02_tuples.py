# a tuple is a built-in data structure in python used to store ordered collections of items.
# touples are very similar to lists but have one key difference: tuples are immutable. this
# means that once a tuple is created, its elements cannot be modified, added or removed.

# key characterstics of tuples
#     1. ordered: the elements in the tuple have specific order, and the order is preserved.
#     2. immutable: once defined, elements of tuple cannot be modified.
#     3. hetrogeneous: a tuple can hold items of different types, like integers, string, float
#        etc.
#     4. hashable: tuples can be used as keys in dictionaries if all their elements are hashable.

num_tuple = (1, 2, 3, 4)

# another sintax to write the tuple is without parenthesis
tuple_without_parenthesis = 7, 8, 9

for num in num_tuple:
    print(num)

for num in tuple_without_parenthesis:
    print(num)

# access tuple itmes using their indices
print(num_tuple[2])

# mixed touple
mixed = ("rahul", 23, 1999, "google", False, 92.23)
print(mixed)

# try to modify item of tuple
# mixed[0] = "update" # we will get an error assignment not supported by tuple

# nested tuple
nested = ((1, 2, 3), (4, 5, 6))
print(nested)

# negative indexing
print(mixed[-1])

# slicing in tuple
print(mixed[1:3])
print(mixed[:3])

# tuple operations
a = (1, 2, 3)
b = (4, 5, 6)
c = a + b
# print(a + b)
# print(c)
print(c * 2)  # adds same element one more time

# membership testing
print("rahul" in mixed)

# to modify a tuple we need to convert it first into a list
my_tuple = (1, 2, 3, 4, 5)
my_list = list(my_tuple)

my_list[4] = 90
my_tuple = tuple(my_list)
print(my_list)
