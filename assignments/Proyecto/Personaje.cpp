//GEnera la implementación de la clase base Personaje
#include <isostream>
#include "Personaje.hpp"

Personaje::Personaje():vida{0}, salud{0}, ataque{0}, nivel{0}{
}
Personaje::Personaje(double vida, double salud, double ataque, double nivel): vida{vida}, salud{salud}, ataque{ataque}, nivel{nivel}{
}

double Personaje::getVida() const{
    return vida;
}
double Personaje::getSalud() const{
    return salud;
}
double Personaje::getAtaque() const{
    return ataque;
}
double Personaje::getNivel() const{
    return nivel;
}

void Personaje::setVida( double vida){
    this->vida = vida;
}
void Personaje::setSalud( double salud){
    this->salud = salud;
}
void Personaje::setAtaque( double ataque){
    this->ataque = ataque;
}
void Personaje::setNivel( double nivel){
    this->nivel = nivel;
}

int Personaje::porcentajeSalud() const{
    return(salud * 100)/vida;
}

void Personaje::imprimeBarra(){
int porcentaje = porcentajeSalud();

int vidaBarra = (porcentaje * 20) / 100;
int vidabarraperdida = 20 - vidaBarra;

for (int i = 0; i<vidaBarra; i++){
    cout << "%";
}

for (int i = 0; i<vidabarraperdida; i++){
    cout << "-";
}

cout << endl;
}