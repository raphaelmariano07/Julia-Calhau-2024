#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    long long int x, y;
    printf("Digite dois numeros inteiros:");
    scanf("%lld %lld" , &x, &y); 
    printf("O numero %11d multiplicado por 4 bilhoes é %lld" , x, x * 4000000000);
    printf("\n");
    printf("O numero %11d multiplicado por 4 bilhoes é %lld" , y, y * 4000000000);
    return 0; 
}
