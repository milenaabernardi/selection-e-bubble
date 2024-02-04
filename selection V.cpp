void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_decrescente(int *v, int n){
    int i, j, maior;
    
    for (i = 0; i < n-1; i++){
        maior = i;
        
        for (j = i+1; j < n; j++){
            if (v[j] > v[maior]){
                maior = j;
            }
        }
        
        if (v[maior] != v[i]){
            troca(&v[maior], &v[i]);
        }
    }
}