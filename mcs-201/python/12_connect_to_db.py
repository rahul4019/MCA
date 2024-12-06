# import mysql.connector

# try:
#     connection = mysql.connector.connect(
#         host:'localhost',
#         user:'root',
#         password: 'password123'
#     )
#
#     if connection.is_connected():
#         print("connected to mysql server")
#
#     # create a cursor object
#     cursor = connection.cursor()
#
#     cursor.execute("CREATE DATABASE IF NOT EXISTS student_DB")
#     print("database 'student_DB' created successfully")
#
# except mysql.connector.Error as err:
#     print(f"Error: {err}")
#
# finally:
#     if connection.is_connected():
#         cursor.close()
#         connection.close()
#         print("mysql connection closed")


# connect to student_db database
# try:
#     db_connection = mysql.connector.connect(
#         host: 'localhost',
#         user: 'root',
#         password: 'password123',
#         database: 'student_db'
#     )
#
#     if db_connection.is_connected():
#         print("connected to student_db database")
#
# except db_connection.Error as err:
#     print(f'Error:{err}')
#
# finally:
#     if db_connection.is_connected():
#         db_connection.close()
#         print("database connection closed")
