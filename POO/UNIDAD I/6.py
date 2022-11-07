# los alumnos de un curso se an divido en 2 grupos A,B deacuerdo al sexo.
# el grupo a esta conformado por mujeres
# y los hombres por el grupo b.
# escribir un programa que pregunte al usuario su nombre y sexo, y muestre por pantalla
# el grupo y el nombre que le corresponde

""" class alumn:
    def __init__(self, name, genere):
        self.name = name
        self.genere = genere
 """

numAlumn = int(input('Ingrese la cantidad de alumnos:'))
print('***************************')
a = []
b = []

for i in range(numAlumn):
    newAlumnName = input('Ingrese su nombre: ')
    newAlumnGenere = int(
        input('Ingrese su genero:\n1.- Masculino\n2.- Femenino\n'))
    """ newAlumn = alumn(newAlumnName, newAlumnGenere) """
    if (newAlumnGenere == 1):
        a.append(newAlumnName)
    else:
        b.append(newAlumnName)
    print('-------------------------------')


print('Grupo A:\n', a, '\nGrupo B:\n', b)
