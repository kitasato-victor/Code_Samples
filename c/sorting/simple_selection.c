#include <stdlib.h>
#include <stdio.h>

int main (){

    int n = 6;

    int v[n];
    v[0] = 10;
    v[1] = 2;
    v[2] = 7;
    v[3] = 4;
    v[4] = 8;
    v[5] = 3;

    int aux = 0;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            if (v[i]<v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    for (int z = 0; z<n; z++){
        printf("%d\t",v[z]);
    }


    return 0;
}