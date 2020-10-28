def heapify(array, n, i):
	largest = i
	left = 2*i + 1
	right = 2*i + 2

	if left < n and array[i] < array[left]:
		largest = left

	if right < n and array[largest] < array[right]:
		largest = right

	if largest != i:
		array[i],array[largest] = array[largest],array[i]

		heapify(array, n, largest)

def heapSort(array):
	n = len(array)

	# Max-heap.
	for i in range(n//2 - 1, -1, -1):
		heapify(array, n, i)

	for i in range(n-1, 0, -1):
		array[i], array[0] = array[0], array[i] # swap
		heapify(array, i, 0)

array = []
arr = int(input('Number of elements:'))

for i in range(0,arr):
    elements = int(input())
    array.append(elements)

print('Unsorted array : ' + str(array))

heapSort(array)
n = len(array)
print ('Sorted array : ' + str(array))
