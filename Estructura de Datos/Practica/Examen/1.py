from msvcrt import getch


text = ""
completed = True
while completed:
    value = input()
    if (value == "."):
        break
    text += value

print(text)
