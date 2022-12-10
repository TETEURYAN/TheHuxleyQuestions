#4120 - Ajuda vendedores
#https://thehuxley.com/problem/4120

valor = float(input())


print('A vista com desconto de 10%: {:.2f}'.format(valor*0.90))
print('Valor da parcela em 3x sem juros: {:.2f}' .format(valor*1/3))
print('Comissao do vendedor a vista: {:.2f}'.format(valor*0.9*0.05))
print('Comissao do vendedor a prazo: {:.2f}'.format(valor*0.05))

