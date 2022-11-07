

class Alumn:
    def __init__(self, firstName, lastName, email, phone, position, seccion, grade):
        self.firstName = firstName
        self.lastName = lastName
        self.email = email
        self.phone = phone
        self.position = position
        self.seccion = seccion
        self.grade = grade

    def toString(self):
        print("My name is {} de {}° '{}'".format(
            self.firstName, self.grade, self.seccion))


class Teacher:
    def __init__(self, firstName, lastName, email, phone, grade_academic, especialidad):
        self.grade_academic = grade_academic
        self.especialidad = especialidad
        self.firstName = firstName
        self.lastName = lastName
        self.email = email
        self.phone = phone

    def toString(self):
        print("My name is {}, de la especialidad de {}.".format(
            self.firstName, self.especialidad))


class Admin:
    def __init__(self, grade_academic, firstName, lastName, email, phone, especialidad, area):
        self.grade_academic = grade_academic
        self.especialidad = especialidad
        self.area = area
        self.firstName = firstName
        self.lastName = lastName
        self.email = email
        self.phone = phone

    def toString(self):
        print("My name is {}, del area de {}.".format(self.firstName, self.area))


Juan = Alumn("Jose", "Paye", "Jose@gmail.com", "910852459", )
