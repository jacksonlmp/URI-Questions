tamanho = int(input())
while tamanho!=0:
    direcao = 0;
    if tamanho == 0:
        break
    letra = input()
    for i in range(len(letra)):
        if letra[i] == 'D':
            if direcao == 2:
                direcao = -1
            else:
                direcao += 1
        elif letra[i] == 'E':
            if direcao == -1:
                direcao = 2
            else:
                direcao -= 1
    if direcao == 0:
        print("N")
    elif direcao == -1:
        print("O")
    elif direcao == 1:
        print("L")
    else:
        print("S");
    tamanho = int(input())
