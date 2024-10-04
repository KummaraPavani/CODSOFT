def find_element_index(arr, k):
    last = arr[0:k]
    arr[0:k] = []
    return arr + last

# Example usage
arr = [1, 2, 3, 4, 5]
k = 2
k += 1

# Function call and print result
print(find_element_index(arr, k))
