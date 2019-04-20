class Base:
    
    def __init__(self, a, b):
        self.a = a
        self.b = b

class Derived(Base):
    
    def addNumbers(self):
        self.Add = self.a + self.b
        return self.Add

    def subNumbers(self):
        self.Diff = self.a - self.b
        return self.Diff

def main():
    Obj = Derived(5, 2)
    print("A = ", Obj.a)
    print("B = ", Obj.b)
    print("Sum of A and B is : ", Obj.addNumbers())
    print("Difference of A and B is : ", Obj.subNumbers())

if __name__ == "__main__":
    main()

    
