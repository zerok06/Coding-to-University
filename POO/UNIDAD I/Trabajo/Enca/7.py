class Base:
    def __init__(self):
        self.a = "GeeksforGeeks"
        self.__c = "GeeksforGeeks"
 
class Derived(Base):
    def __init__(self):
        Base.__init__(self) 
        print("Calling private member of base class: ")
        print(self.__c)
obj1 = Base()
print(obj1.a)