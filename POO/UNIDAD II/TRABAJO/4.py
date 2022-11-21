ArrayNiñosConBajaAutoestima = []

class alumno:
    def __init__(self, name, age, section, grade, tutor):
        self.name = name
        self.age = age
        self.section = section
        self.grade = grade
        self.tutor = tutor
    def  dic( self, name, age, sectio , grade, tutor):
        return {name: self.name, age:self.age, sectio: self.section, grade: self.grade, tutor: self.tutor}


niñito = alumno("Juan", 12, "A", 3, "Doc. Lucas")

ArrayNiñosConBajaAutoestima.append(niñito.dic("Nombre","Edad", "Seccion", "Grado", "Tutor"))

print(ArrayNiñosConBajaAutoestima)