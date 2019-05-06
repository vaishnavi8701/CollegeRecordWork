myTuple1 = ('Hello', 2.4, 5, [9, 8, 7], 5)
myTuple2 = (17, 18, 19, 20)

#Displaying Tuple
print("Tuple : ", myTuple1)

#Displaying Data at a specific location
print("First element of the tuple : ", myTuple1[0])

#Displaying Data at a specific location using negative indexing
print("Last element of the tuple is : ", myTuple1[-1])

#Slicing Operation
print("Slicing the tuple : ", myTuple1[0:3])

#Editing nested elements in the tuple
myTuple1[3][1] = 10
print("Tuple after editing the nested list : ", myTuple1)

#Searching for a specific element
print("Index of 2.4 is : ", myTuple1.index(2.4))

#Display count of a specific element
print("Count of 5 is : ", myTuple1.count(5))

#length of a tuple
print("Length of the tuple : ", len(myTuple1))

#Largest and the smallest element
print("Maximum element : ", max(myTuple2))
print("Minimum element : ", min(myTuple2))

#Membership
print("Check if 18 exists in tuple : ", 18 in myTuple2)

#concateation of two tuples
print("Conacatenation of two tuples : ", myTuple1 + myTuple2)

#Repetition
print("Repetition : ", myTuple2 * 2)

#Converting a sequence to a tuple
seqTuple = tuple(range(0, 10))
print("Sequence : ", seqTuple)

#Deleting complete tuple
del myTuple1, myTuple2, seqTuple
