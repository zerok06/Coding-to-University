class studient:
    def __init__(self, name, dni, note):
        self.name = name
        self.dni = dni
        self.note = note


lengthArr = int(input("Ingrese la cantidad de alumnos: "))
arrAlumno = []
for i in range(lengthArr):
    currentName, currentDni, currentNote = '', "", ""
    isValidData = False
    print("Ingrese los datos del alumno {}:".format(i+1))
