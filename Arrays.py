# Create an array
arr = [1, 2, 3, 4, 5]

# Accessing array elements
print("Array elements:")
for num in arr:
    print(num)

# Length of the array
length = len(arr)
print("Length of the array:", length)

# Accessing individual elements by index
print("Element at index 2:", arr[2])

# Modifying an element
arr[3] = 8
print("Modified array:", arr)

# Appending an element
arr.append(6)
print("Array after appending 6:", arr)

# Inserting an element at a specific index
arr.insert(2, 7)
print("Array after inserting 7 at index 2:", arr)

# Removing an element by value
arr.remove(3)
print("Array after removing 3:", arr)

# Removing an element by index
removed_element = arr.pop(4)
print("Array after removing element at index 4:", arr)
print("Removed element:", removed_element)

# Searching for an element
if 5 in arr:
    print("5 is present in the array")
else:
    print("5 is not present in the array")

# Sorting the array
arr.sort()
print("Sorted array:", arr)

# Reversing the array
arr.reverse()
print("Reversed array:", arr)

# Slicing the array
sub_array = arr[1:4]
print("Sliced array:", sub_array)


# Copyright 2023, Peace Oloruntoba
