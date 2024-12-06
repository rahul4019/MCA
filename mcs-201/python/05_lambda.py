# a lambda function is a small, anonymous function in python. it is defined using the lambda
# keyword and can have any number of arguments but only a single expression. lambda functions
# are often used as a shorthand for simple functions that are not reused elsewhere in the code.

sum = lambda a, b: a + b

# a = input("Enter first num:\n")
# b = input("Enter second num:\n")
#
# print(sum(int(a), int(b)))

# key features of lambda
# 1. anonymous: lambda functions don't have a name and are typically used where defining a full
#    function is unnecessary
#
# 2. single expression: they can only contain one expression (no statements or multiple lines)
#
# 3. inline use: commonly used as arguments for functions like map(), filter(), and sorted()

# lambda function to calculate the cube of a number
cube = lambda a: a * a * a

a = input("Enter the number: ")
print(cube(int(a)))


# find cube without using lambda function
def find_cube(a):
    return a * a * a


print(find_cube(int(a)))
