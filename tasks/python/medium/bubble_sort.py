def bubble_sort(arr):
    for i in range(len(arr)):
        for j in range(len(arr) - (i + 1)):
            print(i,j)
            if (arr[j] > arr[j+1]):
                arr[j], arr[j+1] = arr[j+1], arr[j]
            

#! Test cases (Don't edit):
arr = [64, 25, 12, 22, 11]
print("Original array:", arr)

bubble_sort(arr)
print("Sorted array:", arr)
