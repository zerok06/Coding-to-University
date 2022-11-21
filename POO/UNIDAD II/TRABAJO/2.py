ArrayEmpleados = []

class trabajador:
    def __init__(self, name, email, area, phone):
        self.name = name
        self.email = email
        self.area = area
        self.phone = phone
    def dic(self, name, email, area, phone):
        return {name: self.name, email: self.email, area: self.area, phone: self.phone}
        

empleado = trabajador("Jorge", "jorge@gmail.com", "Administracion", "958745632")
empleado.dic("Nombre", "Correo", "Área", "Telefono")


ArrayEmpleados.append(empleado.dic("Nombre", "Correo", "Área", "Telefono"))

print(ArrayEmpleados)