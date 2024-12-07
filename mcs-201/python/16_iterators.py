# what is an iteration?
# ans: iteration is a general term which means visiting all the elements of an iterable object
# one by one
# ex: using for loop to print all the elements of a list

# What is an iterator?
# ans: an iterator is an object which allows the programmer to traverse through the sequence
# of data without loading the whole data insidet the memory in a very efficient way

# ex:

import sys


L = [x for x in range(1, 100)]  # loads all the 100 elements in the memory

for i in L:
    print(i)

print(sys.getsizeof(L))


x = range(1, 100)  # here range is an iterable
print(sys.getsizeof(x))


# when we put the iterable in the iter function we get the iterator
iterator = iter(x)
print(f"iterator: {iterator}")
print(f"iterator: {type(iterator)}")

# points to remember
# 1. every iterator is also an iterable
# every iterator has both iter function and next function
# we can loop over a iterator

# 2. not all iterables are iterators
#     list is an iterable but it is not an iterator why? because we need to load it in the
# memory and it does not have a next function. However it has __iter__() implementation in it

print(dir(L))
