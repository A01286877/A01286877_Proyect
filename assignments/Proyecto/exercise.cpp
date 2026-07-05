#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Personaje.hpp"
using namespace std;

int main() 
{
  srand(time(nullptr));

  Personaje aliado(100, 100, 40, 3);
  Personaje enemigo(100, 100, 10 , 1);

  cout << "Stats Aliado: " << endl;
  aliado.imprimir();

  cout << "Stats Enemigo: " << endl;
  enemigo.imprimir();

  cout << "Aliado ataca a Enemigo: ";
  aliado.atacar(enemigo);

  cout << "Resultados del ataque" << endl;

  cout << "Enemigo: " << endl;
  enemigo.imprimir();

  return 0;

  
}
