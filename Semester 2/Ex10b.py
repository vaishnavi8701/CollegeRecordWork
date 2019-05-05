fibList = []
def Fib(n):
	a, b = 0, 1
	fibList.append(a)
	fibList.append(b)
	for i in range(2, n):
		num = fibList[a] + fibList[b]
		fibList.append(num)
		a += 1
		b += 1

def Disp(n):
    for j in range(0, n):
        print(fibList[j], end = ' ')

>>> import Ex10b
>>> Ex10b.Fib(20)
>>> Ex10b.Disp(20)
