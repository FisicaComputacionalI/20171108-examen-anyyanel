//Any Yanel Morales Guevara
//Programa dos para examen ordinario 
//10/11/17
//El programa inicia con x=1, si esa x es menor o igual que 5, entonces se tiene que verificar si es multiplo de 3, si no es asi se imprime el valor de x, luego se le suma 2 y se repite el proceso anterior, asi hasta que x es menor o igual a 5 y entonces el programa termina y se imprime finalmente el valor de x

#include<iostream>
using namespace std;
int main()
{
  int x;
  x=1;
  while(x<=5){
    if(x%3==0){
      x=x+2;}
    else{
      cout<<x<<endl;
      x=x+2;}
  }
  return 0;
}
