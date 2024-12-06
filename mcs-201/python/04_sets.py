# a set in python is a built-in data structure that represents an unordered collection of unique
# items. sets are primarily used to perform mathematical operations like union, intersection, and
# difference.
# they ensure that each element in the set is usique

# key characterstics of sets

# 1. unordered: elements in the set do not have a specific order (sorts the items like asscending order)
# 2. unique: a set does not allow duplicate element
# 3. mutable: items can be added or removed from the set
# 4. heterogeneous: a set can contain items of different data types
# 5. hashable items: only immutable data types like tuple, number, strings can be set elements
#     list and dictionaries cannot be set elements.


# create set
my_set = {1, 2, 3, 4}
print(type(my_set))

another_set = set([4, 5, 6])  # using set constructor

empty_set = set()
print(type(empty_set))

# check duplicates
duplicate_set = {9, 8, 10, 1, 2, 2, 3, 3, 4, 5, 9}  # duplicates will be removed
print(duplicate_set)

# accessing items
for item in duplicate_set:
    print(item)
