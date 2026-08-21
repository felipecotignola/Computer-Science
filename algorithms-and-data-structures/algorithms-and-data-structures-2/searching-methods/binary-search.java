    int inicio = 0;
    int fim = arr.length - 1;
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        if (arr[meio] == target) {
            return meio;
        }
        if (arr[meio] < target) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }


 
