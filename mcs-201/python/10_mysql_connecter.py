# mysql connector is a library or driver that enables interaction between mysql database and
# an application written in various programming languages like python, java, c++, etc. it
# allows developers to establish a connection with the database, execute queries, and fetch
# results. mysql connector provides a consistent and standardized way to interact with mysql
# databases programmatically.


# Methods used by MySQL connector
# 1. Establishing a connection:
#     to interact with a database, the first step is to establish a connection between the
#     application and mysql server. The connecor provides method to achieve this:
#
#     Method: connect()
#     the connect() method establishes a connection with the mysql database. it requires the
#     following parameters:
#         host: the hostname or the IP address of the mysql server
#         user: the username to authenticate with the server
#         password: the corresponding password
#         database: (optional) the name of the database to connect to

# import mysql.connector
#
# connection = mysql.connector.connect(
#     host:"localhost",
#     user:"root",
#     password:"password123",
#     database:"student_db"
# )
#
# if connection.is_connected():
#     print("connection established successfully")


# 2. Executing queries
# once the connection is established, sql queries can be executed using a cursor object.

# Method: cursor()
# the cursor() method creates a cursor object that allows us to execute SQL queries and
# fetch results.

# Method: execute()
# the execute() method is used to execute a single SQL query

# ex:
#     cursor = connection.cursor()
#     cursor.execute("SELECT * FROM students")

# 3. Retrieving records
# after executing a query, the next step is fetching a result, mysql connector provides
# several methods for this:

# Method: fetchone()
# retrieves the next row from the result set as a tuple. returns None if there are no
# more rows

# ex:
#     record = cursor.fetchone()
#     print(record)

# Method: fetchall()
# reterives all remaining rows from the result set as a list of tuples

# ex:
#     records = cursor.fetchall()
#     for row in records:
#         print(row)

# Method: fetchmany()
# retrieves specific no. of rows from the result set as a list of tuples

# ex:
#     records = cursor.fetchmany(3)
#     for row in records:
#         print(row)

# connection.commit() is used for INSERT, UPDATE, DELETE

# close the cursor using cursor.close()
# close the connection using connection.close()
