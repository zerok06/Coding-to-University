arrList = ["Bebe", "Niño", "Pubertad",
           "Adolecente", "Joven", "Adulto", "Anciano"]
age = int(input("Ingrese su edad: "))

if age >= 0 and age <= 2:
    print(arrList[0])
if age >= 3 and age <= 5:
    print(arrList[1])
if age >= 6 and age <= 12:
    print(arrList[2])
if age >= 13 and age <= 18:
    print(arrList[3])
if age >= 19 and age <= 25:
    print(arrList[4])
if age >= 26 and age <= 60:
    print(arrList[5])
if age > 60:
    print(arrList[6])

