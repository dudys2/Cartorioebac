#Calculadora basica pythom

#Menu
op - int(input("1. Soma \n 2. Menos \n 3. Multiplicaçao \n 4. Divisao \n Existe uma opçao: "))

#Declaramos as variaveis
num1 = int(input("Primeiro valor: "))
num2 = int(input("Segundo valor: "))

#Operaçoes basicas
 if op == 1:
   resultado = num1 + num2
  print("O resultado e:",resultado)
 elif op == 2:
   resultado = num1 + num2
  print("O resultado e:",resultado)
 elif op == 3:
   resultado = num1 + num2
  print("O resultado e:",resultado)
 elif op == 4:
    if num2 == 0:
      print("Divisao indefinida")
    else:
      resultado = num1 / num2
      print("O resultado e:",resultado)
