myTuple = ('Hello', 2.4, 5, [9, 8, 7], 5)
myList = [1, 2, 3, 4, 5, 6, 7, 3]
mySet = {98, 7, 6, 5, 2.5, 36.0}
myDict = {'Zero':0, 'One':1, 'Two':2, 'Three':3}

#Displaying Tuple
print("Tuple : ", myTuple)

#Displaying Data at a specific location
print("First element of the tuple : ", myTuple[0])

#Displaying Data at a specific location using negative indexing
print("Last element of the tuple is : ", myTuple[-1])

#Slicing Operation
print("Slicing the tuple : ", myTuple[0:3])

#Editing nested elements in the tuple
myTuple[3][1] = 10
print("Tuple after editing the nested list : ", myTuple)

#Searching for a specific element
print("Index of 2.4 is : ", myTuple.index(2.4))

#Display count of a specific element
print("Count of 5 is : ", myTuple.count(5))

#length of a tuple
print("Length of a tuple : ", len(myTuple))


#Displaying elements of a list
print("\nList elements : " , myList)

#Updating list values
myList[0] = 5
print("List after updating : ", myList)

#Appending and inserting elements
myList.append(10)
myList.insert(15, 3)
print("List after appending and insertion : ", myList)

#Popping an element
myList.pop()
print("List after popping : ", myList)

#Deletion at a specific location
del myList[1]
print("List after deleting element at index 1 : ", myList)

#Length of list
print("Length of the list is : ", len(myList))

#Check if element 3 is present in the list
print("Checks if element 3 is in the list : ", 3 in myList)

#Min and max element in the list
print("Minimum element : ", min(myList))
print("Maximum element : ", max(myList))

#Count of element 3
print("Count of element 3 in the list : ", myList.count(3))

#Sort a list
myList.sort()
print("Sorted list : ", myList)

#Reverse a list
myList.reverse()
print("Reversed list : ", myList)

#Sum of the list
print("The sum of the list is : ", sum(myList))

#Inserting one list into another
myList[2] = [9, 11, 13]
print("List after inserting a new list : ", myList)

#Deletion of complete list
del myList


#Display set
print("\nSet elements : ", mySet)

#Appending elements to a set
mySet.add(8)
print("Set after element 8 : ", mySet)

#Length of set
print("Length of set : ", len(mySet))

#Removing an element from the set
mySet.remove(98)
print("Set after removing 98 is : ", mySet)

#Sum of set elements
print("The sum of the set elements is : ", sum(mySet))

#Sorted set
print("Elements after sorting : ", sorted(mySet))

#Removing an arbitrary element
mySet.pop()
print("Set after removing an arbitrary element : ", mySet)

#Clears complete set
mySet.clear()
print("Empty set : ", mySet)

#print dictionary
print("\nDictionary elements : ", myDict)

#Editing dictionary elements
myDict[2]="World"
print("After Editing dictionary elements : " , myDict)

#Number of dictionary elements
print("Number of dictionary elements : ", len(myDict))

#string representation of the dictionary
print("String representation : ", str(myDict))

#Returning correseponding value of the passed key
print("Value at One is : ", myDict.get('Zero'))

#List of keys
print("the keys in the dictionary are : ", myDict.keys())

#List of values
print("the values in the dictionary are : ", myDict.values())

#deleting dictionary elements
del myDict['Three']
print("Dictionary after deleting key Three : ", myDict)

#Deleting using pop()
myDict.pop('One')
print("Dictionary after popping key One is : ", myDict)

#Deleting complete dictionary
myDict.clear()
