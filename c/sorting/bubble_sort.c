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

    int x = n;
    int aux;

    while(x>0){
        int y = 0;

        for (int i = 0; i<n-1; i++){
            int j = i+1;
            if (v[j]<v[i]){
                aux = v[i];
                v[i] = v[(j)];
                v[j] = aux;
                y = i;
            }
            x = y;
        }
    }

    for (int z = 0; z<n; z++){
        printf("%d\t",v[z]);
    }


    return 0;
}