def printFruit():
    print("Apple", end = ' ')
def decorator(func):
    def inner():
        printFruit();
        print("is a fruit.")
    return inner
newFunc = decorator(printFruit)
newFunc()
