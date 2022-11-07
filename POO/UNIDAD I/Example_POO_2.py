class persona:
    def __init__(self, name, age, isTeacher):
        self.name = name
        self.age = age
        self.isTeacher = isTeacher

    def printName(self):
        print("My name is {}, {} years old.".format(self.name, self.age))

juan = persona('Juan', 18, False)

juan.printName()