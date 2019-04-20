class Student:

    def get_details(self):
        self.name = input("Enter you name : ")
        self.rollNo = input("Enter roll number : ")
        self.dept = input("Enter Department : ")

    def show_details(self):
        print("\nStudent name : ", self.name)
        print("Student roll number : ", self.rollNo)
        print("Student Department : " , self.dept)

def main():
    Obj = Student()
    Obj.get_details()
    Obj.show_details()

if __name__ == "__main__":
    main()
        
