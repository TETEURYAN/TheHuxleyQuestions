#2826 - Galões para litros
#https://thehuxley.com/problem/2826

gala = int(input(""))

litro = gala*3.7854
if gala == 1:
    print('1 GALÃO -> 3.79 LITROS')
if gala != 1:
    print(gala,'GALÕES -> {:.2f} LITROS'.format(litro))