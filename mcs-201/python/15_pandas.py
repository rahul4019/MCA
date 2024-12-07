# pandas is a powerful and widely-used python library for data analysis and manuplation.
# it provides easy to use structures like dataframes and series, which are highly efficient
# for handling structured data, such as tabular data in csv or excel files


# steps to import, read and print a csv file using pandas

# 1. import pandas: use the import pandas as pd statement to import the library.
# 2. read a csv file: use pd.read_csv() to load the csv file in dataframe.
# 3. print the dataframe: display the content using the print() function or inspect
#     specific rows and column using dataframe slicing

import pandas as pd

file_path = "temp_reports.csv"
data = pd.read_csv(file_path)


# print(data)
print(data.head())
