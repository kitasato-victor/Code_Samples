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

    

    int aux;
    
    for (int i = 0; i<n; i++){
        int minI = i;

        for(int j = (i+1); j<n; j++){
            if(v[j]<v[minI]){
                minI=j;
            }
        }

        aux = v[i];
        v[i] = v[minI];
        v[minI] = aux;
    }

    for (int z = 0; z<n; z++){
        printf("%d\t",v[z]);
    }

    
    return 0;
}