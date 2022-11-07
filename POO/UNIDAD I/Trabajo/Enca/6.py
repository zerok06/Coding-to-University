class Usuarios:
	def __init__(self, nid, alias, nombre, apellidos, password):
		self.nid = nid
		self.alias = alias
		self.nombre = nombre
		self.apellidos = apellidos
		self.__password = password

	def muestra_datos(self):
		print("El nombre y los apellidos del usuario son: " + self.nombre, self.apellidos)
		print("El ID de usuario es: " + self.nid + ".")
		print("El alias del usuario es: " + self.alias + ".")
		print("La contraseña es: " + self.__password)

usuario1 = Usuarios("002", "PdePython", "Paula", "Vega García", "h$6pOcN9YDub")

usuario1.muestra_datos()