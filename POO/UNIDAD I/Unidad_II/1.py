class Person:
    def __init__(self, firstName, lastName, email, phone):
        self.firstName = firstName
        self.lastName = lastName
        self.email = email
        self.phone = phone


class Alumn(Person):
    def __init__(self, firstName, lastName, email, phone, position, seccion, grade):
        super().__init__(firstName, lastName, email, phone)

        self.position = position
        self.seccion = seccion
        self.grade = grade

    def toString(self):
        print("My name is {} de {}° '{}'".format(
            self.firstName, self.grade, self.seccion))


class Teacher(Person):
    def __init__(self, firstName, lastName, email, phone, grade_academic, especialidad):
        super().__init__(firstName, lastName, email, phone)

        self.grade_academic = grade_academic
        self.especialidad = especialidad

    def toString(self):
        print("My name is {}, de la especialidad de {}.".format(
            self.firstName, self.especialidad))


class Admin(Person):
    def __init__(self, firstName, lastName, email, phone, grade_academic, especialidad, area):
        super().__init__(firstName, lastName, email, phone)
        self.grade_academic = grade_academic
        self.especialidad = especialidad
        self.area = area

    def toString(self):
        print("My name is {}, del area de {}.".format(self.firstName, self.area))


Juan = Alumn("Jose", "Paye", "Jose@gmail.com", "910852459", 2, "A", 3)
Juan.toString()
Javier = Teacher("Javier", "Rodriguez", "javierR123@gmail.com",
                 "987678456", "DOC.", "Redes")
Javier.toString()
Lucas = Admin("Lucas", "Mamani", "lucasMamani123@gmail.com",
              "912345123", "TEC. ", "Software", "TIC")
Lucas.toString()
