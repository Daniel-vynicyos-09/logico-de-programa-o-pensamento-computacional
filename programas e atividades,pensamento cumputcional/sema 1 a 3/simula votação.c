#include <stdio.h>
#include <string.h>

int main() {

    char nome1[50], nome2[50], aux[50];
    int codigo1, codigo2, auxCodigo;

    int voto;
    int votos1 = 0, votos2 = 0;
    int branco = 0, nulo = 0;
    int total = 0;

    printf("Digite o nome do primeiro candidato: ");
    fgets(nome1, 50, stdin);
    nome1[strcspn(nome1, "\n")] = '\0';

    printf("Digite o codigo do primeiro candidato: ");
    scanf("%d", &codigo1);
    getchar();

    printf("Digite o nome do segundo candidato: ");
    fgets(nome2, 50, stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite o codigo do segundo candidato: ");
    scanf("%d", &codigo2);

    if (strcmp(nome1, nome2) > 0) {
        strcpy(aux, nome1);
        strcpy(nome1, nome2);
        strcpy(nome2, aux);

        auxCodigo = codigo1;
        codigo1 = codigo2;
        codigo2 = auxCodigo;
    }

    do {

        printf("\n-----------------------------\n");
        printf("Menu:\n");
        printf("Voto em %s: %d\n", nome1, codigo1);
        printf("Voto em %s: %d\n", nome2, codigo2);
        printf("Voto em Branco: 0\n");
        printf("Encerrar votacao: -1\n");
        printf("Digite sua opcao: ");
        scanf("%d", &voto);

        if (voto >= 0) {

            total++;

            if (voto == codigo1) {
                votos1++;
            }
             else if (voto == codigo2) {
                votos2++;
            }
            else if (voto == 0) {
                branco++;
            }
            else {
                nulo++;
            }

        }

    } while (voto >= 0);

    printf("\n========== RESULTADO ==========\n");
    printf("Total de votos: %d\n", total);
    printf("%s: %d votos\n", nome1, votos1);
    printf("%s: %d votos\n", nome2, votos2);
    printf("Votos em branco: %d\n", branco);
    printf("Votos nulos: %d\n", nulo);

    if (total > 0) {
        printf("Percentual de votos em branco: %.2f%%\n", (branco * 100.0) / total);
        printf("Percentual de votos nulos: %.2f%%\n", (nulo * 100.0) / total);
    }
    else {
        printf("Nenhum voto foi registrado.\n");
    }

    return 0;
}

<!DOCTYPE html>
<html lang="pt-BR">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Busca em Matriz 8x8</title>

<style>
    body{
        font-family: Arial, sans-serif;
        background:#f0f0f0;
        text-align:center;
    }

    table{
        margin:auto;
        border-collapse:collapse;
    }

    td{
        padding:3px;
    }

    input[type=number]{
        width:45px;
        height:30px;
        text-align:center;
    }

    button{
        margin:10px;
        padding:10px 20px;
        cursor:pointer;
    }

    #resultado{
        font-size:18px;
        font-weight:bold;
        margin-top:20px;
    }
</style>

</head>
<body>

<h2>Matriz 8x8</h2>

<table id="matriz"></table>

<br>

<input type="number" id="valor" placeholder="Valor">

<button onclick="procurar()">Procurar</button>

<p id="resultado"></p>

<script>

let tabela = document.getElementById("matriz");

// Cria a matriz 8x8
for(let i=0;i<8;i++){

    let linha = tabela.insertRow();

    for(let j=0;j<8;j++){

        let celula = linha.insertCell();

        let caixa = document.createElement("input");
        caixa.type = "number";
        caixa.id = "c"+i+"_"+j;

        celula.appendChild(caixa);
    }
}

function procurar(){

    let x = Number(document.getElementById("valor").value);

    let encontrou = false;
    let linha = -1;
    let coluna = -1;

    for(let i=0;i<8;i++){

        for(let j=0;j<8;j++){

            let valor = Number(document.getElementById("c"+i+"_"+j).value);

            if(valor == x){
                encontrou = true;
                linha = i;
                coluna = j;
            }

        }

    }

    if(encontrou)
        document.getElementById("resultado").innerHTML =
        x + " foi encontrado na posição [" + linha + "][" + coluna + "]";
    else
        document.getElementById("resultado").innerHTML =
        "O valor " + x + " não está na matriz.";

}

</script>

</body>
</html>
