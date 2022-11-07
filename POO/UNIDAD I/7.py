# Escribir un programa apra una empresa que tiene salas de juegos
#  para todas las edades y quiere calcular de forma automatica el 
# precio que debe cobrar a sus clientes por entrar.
# el programa debe preguntar al usuario la edad del cliente y mostrar el precio
#  de las entradas. si el cliente es menor de 4 años puede entrar gratis, 
# si tiene entre 4 y 18 debe pagra s/. 5 soles y si es mayo de 18 años debe
#  pagar 10 sole  

name = input('Ingrese su nombre:')
age = int(input('Ingrese su edad:'))

if(age < 4):
    print('Usuario: ', name, '\nPago: ',  's/.0')
elif (age >= 4 and age <= 18):
    print('Usuario: ', name, '\nPago: ',  's/.5')
else:
    print('Usuario: ', name, '\nPago: ',  's/.10')
