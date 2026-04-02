#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    int n;
    printf("Ingrese el tamano del vector: ");
    scanf("%d", &n);
    
    if(n<=0){
        printf("Error, ingrese un numero positivo.");
        scanf("%d", &n);
    }

    int A[n];
    srand(time(NULL));
    for(int i=0; i<n; i++){
        A[i]=rand()%100+1;
    }

    for (int i=0; i<n; i++){
        printf("%d ", A[i]);
    }
}
/*
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/Alejandro-C12/cueva_alejandro_ejercicio4.1_repos2.git
git push -u origin main
*/