import serial
from Tkinter import *
ard= serial.Serial('/dev/ttyACM0',9600)
root = Tk()

def coke():
    ard.write('0,1,0')
    

def sprite():
    ard.write('0,2,0')

def fanta():
    ard.write('0,3,0')

def tu():
    ard.write('0,4,0')

top=Label(root)
top.pack()
bottomFrame=Label(root)
bottomFrame.pack(side=BOTTOM)

button1= Button(top, text="CocoCola", command=coke)
button2= Button(top, text="Sprite", command=sprite)
button3= Button(top, text="Fanta", command=fanta)
button4= Button(top, text="Thumbs Up", command=tu)
button1.pack(side=LEFT)
button2.pack(side=RIGHT)
button3.pack(side=RIGHT)
button4.pack(side=RIGHT)


root.mainloop()

