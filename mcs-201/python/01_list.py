# A list in python is a built in data structure used to store an ordered collection of items.
# It is mutable, meaning we can modify its contnet (add, remove, or change element). Lists can
# hold items of different data types, such as integer, boolean, strings or even other lists.

# key characterstics of lists
# 1. Ordered: The order of the elements are maintained. Indexing starts from 0.
# 2. Mutable: you can modify the elements after the list is created.
# 3. Hetrogeneous: Can contain elements of different types.
# 4. Dynamic: Can grow or shrink as needed.


my_list = [1, 2, "rahul", "kumar", 39.29, True]

for i in range(len(my_list)):
    print(my_list[i]) # accessing items of the list using their indices.


print(my_list[-1], my_list[-2]) # negative indexing

# common operations
my_list.append("hello world")
my_list.append("hello world") # appends the element at the end of the list
my_list.insert(2, "inserted word") # inserts an element at specified index
my_list.remove("hello world") # removes the first occurance

print("My list: ", my_list)

# iterating through the list
for item in my_list:
    print(item)

my_list.pop() # removes the last element in the list
my_list.clear() # clears a list



