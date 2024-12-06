# in python, the terms framework, library, package and module are often used interchangebly
# but they have distinct meaning.

# 1. Framework:
#     a framework in python is collection of pre written code that provides a foundation for
#     developing applications. it includes libraries, tools, and best practices, and generally
#     enforces a particular way of doing things. Frameworks offer a structure that we can
#     extend or customize to build our application, saving time and effort by not having to
#     write repetitive code.
# ex: Django

# 2. Library:
#     a library is a collection of modules and functions that can be used to perform specific
#     tasks, but it doesn't impose any structure or flow on your code. It is designed to help
#     you achieve certain functionalities by providing reusable code.
#     ex: numpy used for mathematical computation

# 3. Package:
#     a package is a collection of modules organized in a directory hierarchy. a package is
#     essentially a directory that contains multiple modules and a special __init__.py file
#     to indicate that the directory should be treated as a package
# ex: matlibplot is a plotting package


# 4. Module:
#     a module is a single file containing python code that can define functions, classes,
#     or variables and can include runnable code. modules allow you to organize your code
#     into separate files.

# Relation between framework, library, package and module.

# - a framework is built on top of libraries and provides a structure way to develop applications
# - a library contains reusable code but doesn't enforce any particular structure. it can be
#   part of a single package
# - a package is a collection of modules that provides a way to organize related module together
# - a module is a single python file that contains definitions and functions
