myList1 = [1, 2, 3, 4, 5, 6, 7, 3]
myList2 = [11, 13, 15, 17, 19]

#Displaying elements of a list
print("\nList elements : " , myList1)

#Slicing
print("Slicing operation : ", myList1[1:4])

#Updating list values
myList1[0] = 5
print("List after updating : ", myList1)

#Appending and inserting elements
myList1.append(10)
myList1.insert(15, 3)
print("List after appending and insertion : ", myList1)

#Popping an element
myList1.pop()
print("List after popping : ", myList1)

#Deletion at a specific location
del myList1[1]
print("List after deleting element at index 1 : ", myList1)

#Length of list
print("Length of the list is : ", len(myList1))

#Check if element 3 is present in the list
print("Checks if element 3 is in the list : ", 3 in myList1)

#Min and max element in the list
print("Minimum element : ", min(myList1))
print("Maximum element : ", max(myList1))

#Count of element 3
print("Count of element 3 in the list : ", myList1.count(3))

#Concatenation of two lists
print("Concatenation : ", myList1 + myList2)

#Repetion of the same list
print("Repetition : ", myList2 * 2)

#Sort a list
myList1.sort()
print("Sorted list : ", myList1)

#Reverse a list
myList1.reverse()
print("Reversed list : ", myList1)

#Sum of the list
print("The sum of the list is : ", sum(myList1))

#Inserting one list into another
myList1[2] = [9, 11, 13]
print("List after inserting a new list : ", myList1)

#Converting a sequece to a list
seqList = list(range(90, 100, 2))
print(seqList)

#Checking for list matching
print("Checking for list matching : ", seqList == [90, 92, 94, 96, 98])

#Permanent Concatenation
seqList.extend([99, 100, 101])
print("After permanent concatenation : ", seqList)

#Return index of element
print("Index of 98 : ", seqList.index(98))

#Deletion of complete list
del myList1, myList2, seqList

#Matrix Addition
myList1 = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
myList2 = [[9, 8, 7], [6, 5, 4], [3, 2, 1]]
Sum = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]

for i in range(len(myList1)):
    for j in range(len(myList2)):
        Sum[i][j] = myList1[i][j] + myList2[i][j]

print("\nMatrix Addition :-")
for n in Sum:
    print(n)
