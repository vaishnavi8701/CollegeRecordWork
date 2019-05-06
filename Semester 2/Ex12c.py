mySet1 = {98, 7, 6, 5, 2.5, 36.0}
mySet2 = {1, 3, 5}
mySet3 = {2, 3, 5, 6}

#Display set
print("\nSet elements : ", mySet1)

#Appending elements to a set
mySet1.add(8)
print("Set after element 8 : ", mySet1)

#Length of set
print("Length of set : ", len(mySet1))

#Maximum and minumum elements
print("Maximum element : ", max(mySet1))
print("Minimum element : ", min(mySet1))

#Removing an element from the set
mySet1.remove(98)
print("Set after removing 98 is : ", mySet1)

#Sum of set elements
print("The sum of the set elements is : ", sum(mySet1))

#Sorted set
print("Elements after sorting : ", sorted(mySet1))

#Removing an arbitrary element
mySet1.pop()
print("Set after removing an arbitrary element : ", mySet1)

#Peramnent concatenation
mySet1.update({11, 12, 13.25})
print("After concatenation : ", mySet1)

#Union of two sets
Union = mySet2.union(mySet3)
print("Union of the two sets is : ", Union)

#intersection of two sets
Intersect= mySet2.intersection(mySet3)
print("Intersection of sets 2 and 3 : ", Intersect)

#difference of two sets
Diff= mySet2.difference(mySet3)
print("Difference of the two sets is : ", Diff)

#Clears complete set
mySet1.clear()
print("Empty set : ", mySet1)
