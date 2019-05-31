entrada = raw_input("")
entrada = entrada.split(" ")

if(int(entrada[0]) % int(entrada[1]) == 0 or int(entrada[1]) % int(entrada[0]) == 0):
    print "Sao Multiplos"
else:
    print "Nao sao Multiplos"
