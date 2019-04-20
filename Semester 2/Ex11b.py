class Student:
    
    def getDetails(self):
        self.name = input("Enter your name : ")
        self.rollNo = input("Enter your roll number : ")

class Marks:
    
    Mark = [0,0,0,0,0]
    
    def getMarks(self):
        for i in range(5):
            self.Mark[i] = int(input("Enter marks in subject " + str(i+1) + " : "))
            
    def totalMarks(self):
        self.Total = 0
        for i in range(5):
            self.Total = self.Total + self.Mark[i]
        self.Avg = self.Total / 5

class CMS(Student, Marks):

    def showDetails(self):
        print("\nStudent name : ", self.name)
        print("Student roll number : ", self.rollNo)
        print("Total marks : ", self.Total)
        print("Average marks : ", self.Avg)

def main():
    Obj = CMS()
    Obj.getDetails()
    Obj.getMarks()
    Obj.totalMarks()
    Obj.showDetails()

if __name__ == "__main__":
    main()
