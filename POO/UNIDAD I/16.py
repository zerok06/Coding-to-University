questions = ["Tu pareja parece estar más inquieta de lo normal sin ningún motivo aparente.",
             "Ha aumentado sus gastos de vestuario", "Ha perdido el interés que mostraba anteriormente por tí", "Ahora se afeita y se asea con más frecuencia (si es hombre) o ahora se arregla el pelo y se asea con más frecuencia (si es mujer)", "No te deja que mires la agenda de su teléfono móvil", "A veces tiene llamadas que dice no querer contestar cuando estás tú delante", "Últimamente se preocupa más en cuidar la línea y/o estar bronceado/a", "Muchos días viene tarde después de trabajar porque dice tener mucho más trabajo", "Has notado que últimamente se perfuma más", "Se confunde y te dice que ha estado en sitios donde no ha ido contigo"]
points = 0

for i in range(len(questions)):
    print("{} (Y / N) ?".format(questions[i]))
    currentValueQuestion = bool(True if input().lower() == 'y' else False)
    """ print(currentValueQuestion) """
    points += 3 if currentValueQuestion else 0

print("Puntaje: {}".format(points))

if 0 <= points <= 10:
    print("¡Enhorabuena! tu pareja parece ser totalmente fiel.")
if 11 <= points <= 22:
    print("Quizás exista el peligro de otra persona en su vida o en su mente, aunque seguramente será algo sin importancia. No bajes la guardia.")
if 22 <= points <= 30:
    print("Tu pareja tiene todos los ingredientes para estar viviendo un romance con otra persona. Te aconsejamos que indagues un poco más y averigües que es lo que está pasando por su cabeza. Realiza un programa que nos diga si hay probabilidad de que nuestra pareja nos está siendo infiel. El programa irá haciendo preguntas que el usuario contestará con verdadero o falso. Cada pregunta contestada como verdadero sumará 3 puntos. Las preguntas contestadas con falso no suman puntos. A continuación, se listan las preguntas del test")
