//Dorantes Garcia Jenifer
//Traduzca el diagrama de flujo diagrama.pgn al lenguage C++
// (a)Explique que hace el diagrama:
/*Lo que hace el diagrama es que empieza con un valor igual a X=1 como x es menor e igual a 5,
 entonces nos pregunta si es multimpo de tres,lo sea o no le da un nuevo valor a  nuestra x (x= x + 2) y 
 vuelve a correr el programa hasta que nuestra x sea mayor que 5.
(b) Suba el codigo que defina el programa al repositorio*/
#include <iostream>
using namespace std;
int main(){
  int x=1;
  while(x<=5){
    if(x%3==0){
      x= x+2;
      cout<<"x = "<<x<<endl;}
    else{
      x = x+2 ;
      cout<<"x = "<<x<<endl;}
    
    
    }
  return 0;

}
