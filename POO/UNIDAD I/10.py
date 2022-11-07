# hacer un programa apar ala calificacion de un alumno para saber su calificacion final en la
#  materia del curso de programacion. y dicha calificacion se compone de los siguientes
#  porcentajes: 50% examen teorico, 40% practicas calificadas y 10% actitudinal

examen1 = float(input('Ingrese su nota de examn teorico (50%):'))
examen2 = float(input('Ingrese su promedio de praticas calificadas (40%):'))
examen3 = float(input('Ingrese su nota actitudinal (10%):'))

if ((examen1 <= 20 and examen1 >= 0) and (examen2 <= 20 and examen2 >= 0) and (examen3 <= 20 and examen3 >= 0)):
    prom = (examen1 * 0.5) + (examen2 * 0.4) + (examen3 * 0.1)
    print('Promedio final: ', round(prom,1))
else:
    print('Las notas deben esta entre 0-20')

