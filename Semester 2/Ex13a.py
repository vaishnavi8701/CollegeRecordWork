# initializing lists 
name = ["Praveen", "Nilesh", "Aryan", "Madan"] 
roll_no = [72, 69, 1, 56] 
marks = [50, 45, 32, 25] 
  
# using zip() to map values 
mapped = zip(name, roll_no, marks)
  
# converting values to print as set 
mapped = list(mapped) 
  
# printing resultant values  
print ("The zipped result is : ",end="") 
print (mapped)

#unzipping values
namz, roll_noz, marksz = zip(*mapped)
print ("The unzipped results are:- \n",end="") 
  
# printing initial lists 
print ("The name list is : ",end="") 
print (namz) 
  
print ("The roll number list is : ",end="") 
print (roll_noz) 
  
print ("The mark list is : ",end="") 
print (marksz) 
