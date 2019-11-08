import math 

x_er = 0
y_er = 0
irany_er = 0

x_uj = 0
y_uj = 0
x = 0
y = 0
irany = 0
R = 0

wheelbase = float(input())
n = int(input())
i = 0
while i!=n:
    i += 1
    distance = float(input())
    szogki = float(input())

    if szogki==0:
        x_uj = 0
        y_uj = distance
        irany = 0
        
    else:
        print (distance," distance")
        print (szogki,"   szogki")

        R = wheelbase/math.sin(szogki*math.pi/180) 
        print (math.sin(szogki*math.pi/180),"   sin 10")
        print (R,"   R")
        alfa = float (distance / R)   #radianban van
        print (alfa,"  alfa radianban")
        while alfa >= math.pi*2:
            alfa-=math.pi*2 
        
        while alfa <= -math.pi*2:
            alfa+=math.pi*2 
        

        x = R*(1-math.cos(alfa))         # x szamitasa
        print (format(x, '.2f'),"   X" ) 
    
        y = R*math.sin(alfa)             # y szamitasa
        print (format(y, '.2f'),"   Y" ) 

        irany=float(alfa*180/math.pi) 
        while irany >= 360:
            irany-=360 
        
        while irany < 0:
            irany+=360 

        print(irany,"   irany")    
        
        #print (format(irany, '.2f') )
        beta= irany_er*math.pi/180
        x_uj = math.cos(beta)*x + math.sin(beta)*y
        print (beta)
        print (x)
        print(-math.sin(beta)*x)
        print (y)
        print(math.cos(beta)*y)
        print(y_er)
        print()
        y_uj = -math.sin(beta)*x + math.cos(beta)*y

    x_er += x_uj
    y_er += y_uj
    irany_er += irany

    print(x_er)
    print(y_er)
    print(irany_er)
    print()  

while irany_er >= 360:
            irany-=360 
        
while irany_er < 0:
      irany+=360 

x_er = round(x_er, 2)
y_er = round(y_er, 2)
irany_er = round(irany_er, 2)

print(x_er)
print(y_er)
print(irany_er)
'''
print (format(x_er, '.2f'))
print (format(y_er, '2.f'))
print (format(irany_er, '2.f'))
   ''' 