# a dictionary in python is a built in data structure that stores data in the form of key-value
# pairs. it is:

# 1. mutable: you can modify its content(add, update, or remove key-value pairs)
# 2. unordered: until python 3.6, dictionaries were unordered, from python 3.7 onwards, they
#               maintain insertion order
# 3. key-value structure: keys are unique and used to retrieve their associated values.

# key characterstics of a dictionary
# 1. keys: must be immutable and unique(e.g., strings, numbers, tuples)
# 2. values: can be of any data type (even another dictionary or list)
# 3. dynamic: can grow or shrink in size dynamically

empty_dict = {}
person = {"name": "rahul", "age": 25, "city": "New Delhi"}  # with key value pairs
grades = dict(rahul=85, sarah=72, mike=92)  # using dict constructor

# print(person)
# print(grades)


# access values using square brackets notation
print(person["name"])

print(person.get("age"))
print(
    person.get("aged")
)  # will return None as there is no key in person dictonary with key aged

# modifying dictionary
person["marks"] = 98
print(person)


del person["marks"]  # removes the key-value pair from the dictionary
person.pop("city")  # removes a key and returns it value

print(person)

# person.clear()  # removes all the items from the dictionary
print(person)

# iterating through dictionary
for item in person:
    print(f"{item}")

for key, value in person.items():
    print(f"{key}: {value}")

for key in person.keys():
    print(f"{key}")

for value in person.values():
    print(f"{value}")
