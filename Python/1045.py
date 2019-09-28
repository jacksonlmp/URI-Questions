a = float(input())
b = float(input())
c = float(input())

if(a >= b + c):
    print("NAO FORMA TRIANGULO")
if(a*a == b*b + c*c):
    print("TRIANGULO RETANGULO")
if(a*a > b*b + c*c):
    print("TRIANGULO OBTUSANGULO")
if(a*a < b*b + c*c):
    print("TRIANGULO ACUTANGULO")
if(a == b and a == c and b == c):
    print("TRIANGULO EQUILATERO")
#FALTA TERMINAR
