myDict1 = {'Name':'Nilesh', 'RollNo':69, 'Dept':'IT', 'Age':18}

#print dictionary
print("\nDictionary elements : ", myDict1)

#Printing Values by passing keys
print("Student department : ", myDict1['Dept'])

#Editing dictionary elements
myDict1['Dept']="CSE"
print("After Editing dictionary elements : " , myDict1)

#Adding a element
myDict1['College'] = 'SVCE'
print("After appending : ", myDict1)

#Number of dictionary elements
print("Number of dictionary elements : ", len(myDict1))

#string representation of the dictionary
print("String representation : ", str(myDict1))

#Returning correseponding value of the passed key
print("College is : ", myDict1.get('College'))

#List of keys
print("The keys in the dictionary are : ", myDict1.keys())

#List of values
print("The values in the dictionary are : ", myDict1.values())

#deleting dictionary elements
del myDict1['RollNo']
print("Dictionary after deleting key RollNo : ", myDict1)

#Deleting using pop()
myDict1.pop('Age')
print("Dictionary after popping key Age is : ", myDict1)

#Deleting complete dictionary
myDict1.clear()
