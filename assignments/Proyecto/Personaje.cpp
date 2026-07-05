//GEnera la implementación de la clase base Personaje
#include <isostream>
#include "Personaje.hpp"

Personaje::Personaje():vida{0}, salud{0}, ataque{0}, nivel{0}{
}
Personaje::Personaje(double vida, double salud, double ataque, double nivel): vida{vida}, salud{salud}, ataque{ataque}, nivel{nivel}{
}

//agarramos los datos
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

//metemos los datos
void Personaje::setVida( double nuevaVida){
    vida = nuevaVida;
}
void Personaje::setSalud( double nuevaSalud){
    salud = nuevaSalud;
}
void Personaje::setAtaque( double nuevoAtaque){
    ataque = nuevoAtaque;
}
void Personaje::setNivel( double nuevoNivel){
    nivel = nuevoNivel;
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

int Personaje::calculaAtaque(Personaje& objetivo){
    int mitad = ataque / 2;
    
    if (objetivo.getNivel() > nivel){
      
        return 1 + rand() % mitad;
    }
    else{
        return mitad + rand() % (ataque - mitad + 1)
    }
}

void Personaje::recibeAtaque(int ptosAtaque){
    salud = salud - ptosAtaque;

    if(salud < 0)
    {
        salud = 0;
    }
}

void Personaje::atacar(Personaje& objetivo){
    int dano = calculaAtaque(objetivo);
    objetivo.recibeAtaque(dano);

}