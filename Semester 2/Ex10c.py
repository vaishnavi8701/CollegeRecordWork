#mod1.py
def foo():
    print('[mod1] foo()')

class Foo:
    pass

#mod2.py
def bar():
    print('[mod2] bar()')

class Bar:
    pass

>>> import pkg.mod1, pkg.mod2
>>> pkg.mod1.foo()
>>> from pkg.mod1 import foo
>>> x
>>> x = pkg.mod2.Bar()
>>> foo()
>>>pkg
