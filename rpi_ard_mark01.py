import serial
from Tkinter import *
arduinoSerialData= serial.Serial('/dev/ttyACM0',9600)
root = Tk()
def coke():
    arduinoSerialData.write('0,5,0')

def sprite():
    arduinoSerialData.write('0,6,0')

top=Label(root)
top.pack()
bottomFrame=Label(root)
bottomFrame.pack(side=BOTTOM)

button1= Button(top, text="CocoCola", command=coke)
button2= Button(top, text="Sprite", command=sprite)
button1.pack(side=LEFT)
button2.pack(side=RIGHT)




root.mainloop()
