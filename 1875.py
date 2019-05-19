caso_teste = int(input())
for i in range(caso_teste):
    gol_r = 0
    gol_g = 0
    gol_b = 0
    qtdade_gol = int(input())

    for i in range(qtdade_gol):
        result = input()      
        m = result[0]
        s = result[2]
        #time G
        if (m == 'G' and s == 'B'):
            gol_g += 2
        elif (m == 'G' and s == 'R'): 
            gol_g += 1
        #time B
        if (m == 'B' and s == 'R'):
            gol_b += 2
        elif (m == 'B' and s == 'G'):
            gol_b += 1
        #time R
        if (m == 'R' and s == 'G'):
            gol_r += 2
        elif (m == 'R' and s == 'B'):
            gol_r += 1

    if (gol_r == gol_g and gol_g == gol_b):
        print('trempate')
    elif (gol_r == gol_g and gol_r > gol_b) or (gol_r == gol_b and gol_r > gol_g) or (gol_g == gol_b and gol_g > gol_r):
        print('empate')
    elif (gol_r > gol_g and gol_r > gol_b):
        print('red')
    elif (gol_g > gol_r and gol_g > gol_b):
        print('green')
    elif (gol_b > gol_g and gol_b > gol_r):
        print('blue')
