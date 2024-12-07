# in python, overloading and overriding are two concepts used in object oriented programming
# but serve different purposes:

# Overloading:
#     overloading refers to defining multiple methods with same name but different signature
#     (i.e., the number of types of parameters), However, python does not support traditional
#     method overloading like java or c++, instead, overloading in python can be simulated
#     using default arguments or variable length arguments (*args and **kwargs)
#


# ex:
class Calculator:
    def add(self, a, b, c=0):  # default argument for third parameter
        return a + b + c


# usage
calc = Calculator()
# result = calc.add(4, 2)
result = calc.add(4, 2, 9)
print(result)

# Overriding
#     overriding occures when a child class provides a specific implementation of a method
#     that is already defined in its parent class. the child class's method overrides the
#     parent class's method.

# ex:

from typing import Literal


class Parent:
    def greet(self) -> str:
        return "Hello from Parent"


class Child(Parent):
    def greet(self) -> str:
        return "Hello from child"


child = Child()
print(child.greet())
