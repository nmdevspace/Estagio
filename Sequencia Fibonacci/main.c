#include <stdio.h>

int pertencefib(int num){
  int x=0, y=1, z=0;
  if (num==0) return 1;
  if (num==1) return 1;
  while (z < num) {
    z=x + y;
    x=y;
    y=z;
  }
  if (z == num){
    return 1;
  }
  else{
    return 0;
  }
}
int main() {
  int numero;
printf("Digite um número:");
scanf("%d", &numero);
if (pertencefib(numero)){
  printf("%d faz parte de Fibonacci.\n", numero);
}
else{
  printf("%d não faz parte de Fibonacci.\n", numero);
}
}