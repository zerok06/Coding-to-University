# escribir un programa que almacen la candema de caracteres (contraseña) en una 
# variable pregrundate al ususario por la contraseña e imprima por pantalla si la 
# contraseña introducidad por el usuario coincide con la guardada en la variable, 
# sin tener en cuenta mayusculas y minusculas



currentPassword =  'josepaye123'.lower()
testPassword = input('Ingrese su contraseña: ').lower()

if(currentPassword == testPassword):
    print('Contraseña correcta!')
else:
    print('Contraseña invalida!')