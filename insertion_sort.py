def insertion_sort_function(Array):

    for x in range(1, len(Array)):
        m = Array[x]
        y = x - 1
        while y >= 0 and m < Array[y]:
            Array[y + 1] = Array[y]
            y = y - 1
        Array[y + 1] = m
Array = [-1, 35, 0, 9, -8]
insertion_sort_function(Array)
print('Sorted Elements: ')
print(Array)
