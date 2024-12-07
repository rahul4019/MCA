# copying content from first.txt to second.txt


def copy_file(source, destination):
    with open(source, "r") as src:
        content = src.read()
    with open(destination, "w") as dest:
        dest.write(content)
    print(f"content copied from {source} to {destination}")


copy_file("first.txt", "second.txt")


def read_file(file_name):
    with open(file_name, "r") as file:
        content = file.read()
    print(f"content of {file_name}:\n{content}")


read_file("second.txt")


def write_to_file(file_name, content):
    with open(file_name, "w") as file:
        file.write(content)
    print(f"content written to {file_name}")


write_to_file("new.txt", "hello world!")


def append_to_file(file_name, content):
    with open(file_name, "a") as file:  # Open the file in append mode
        file.write(content)  # Append the provided content
    print(f"Content appended to {file_name}.")


append_to_file("new.txt", "ldsfjpawoefpaj")
