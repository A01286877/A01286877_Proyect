---
title: Personaje
---
classDiagram
    class Personaje
    Personaje : +Personaje()
    Personaje : +Personaje(double vida, double salud, double ataque, double nivel)

    Personaje : +double getVida()
    Personaje : +double getSalud()
    Personaje : +double getAtaque()
    Personaje : +double getNivel()

    Personaje : +setVida( double nuevaVida)
    Personaje : +setSalud( double nuevaSalud)
    Personaje : +setAtaque( double nuevoAtaque)
    Personaje : +setNivel( double nuevoNivel)

    Personaje : +porcentajeSalud()
    Personaje : +imprimeBarra();
    Personaje : +calculaAtaque(Personaje& objetivo);
    Personaje : +recibeAtaque(int ptosAtaque);
    Personaje : +atacar(Personaje& objetivo);
    Personaje : +imprimir();

    Personaje : -double vida
    Personaje : -double salud
    Personaje : -double ataque
    Personaje : -double nivel





