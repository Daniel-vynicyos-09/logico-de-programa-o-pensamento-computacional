# Cadastro dos candidatos
nome1 = input("Digite o nome do primeiro candidato: ")
codigo1 = int(input(f"Digite o número de {nome1}: "))

nome2 = input("Digite o nome do segundo candidato: ")
codigo2 = int(input(f"Digite o número de {nome2}: "))

# Coloca os candidatos em ordem alfabética
if nome1.lower() < nome2.lower():
    candidatos = [(nome1, codigo1), (nome2, codigo2)]
else:
    candidatos = [(nome2, codigo2), (nome1, codigo1)]

# Contadores
votos1 = 0
votos2 = 0
brancos = 0
nulos = 0

# Votação
while True:
    print("\n------------------------------")
    print("Menu:")

    for nome, codigo in candidatos:
        print(f"Voto em {nome}: {codigo}")

    print("Voto em Branco: 0")
    print("Encerrar votação: -1 (ou qualquer valor negativo)")
    voto = int(input("Digite sua opção: "))

    if voto < 0:
        break
    elif voto == 0:
        brancos += 1
    elif voto == codigo1:
        votos1 += 1
    elif voto == codigo2:
        votos2 += 1
    else:
        nulos += 1

# Total de votos
total = votos1 + votos2 + brancos + nulos

# Percentuais
if total > 0:
    perc_brancos = (brancos / total) * 100
    perc_nulos = (nulos / total) * 100
else:
    perc_brancos = 0
    perc_nulos = 0

# Resultado
print("\n========== RESULTADO ==========")
print(f"Total geral de votos: {total}")

# Exibe os candidatos em ordem alfabética
for nome, codigo in candidatos:
    if codigo == codigo1:
        print(f"Votos para {nome}: {votos1}")
    else:
        print(f"Votos para {nome}: {votos2}")

print(f"Votos em branco: {brancos}")
print(f"Votos nulos: {nulos}")
print(f"Percentual de votos em branco: {perc_brancos:.2f}%")
print(f"Percentual de votos nulos: {perc_nulos:.2f}%")