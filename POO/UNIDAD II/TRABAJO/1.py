
class product:
    
    def __init__(self, id, name, price, stock, descrip, section):
        self.id = id;
        self.name = name;
        self.price = price
        self.stock = stock
        self.descrip = descrip
        self.section = section
    def dicionary(self, id, name, price, stock, descrip, section):
        return {id :self.id, name: self.name, price: self.price, stock: self.stock, descrip: self.descrip, section: self.section}

galleta =  product(2,"Soda V", 12.2, 9899, "Una galleta clasica.", "Galletas");
galleta = galleta.dicionary("id", "Nombre", "Precio", "Cantidad", "Descripcion", "Seccion")
print(galleta)
