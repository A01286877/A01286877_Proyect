// Crear el archivo header de la clase Personaje, no olvides las guardas o el pragma.
#pragma once

class Personaje
{
    public:
    Personaje();
    Personaje(double vida, double salud, double ataque, double nivel);

    double getVida() const;
    double getSalud() const;
    double getAtaque() const;
    double getNivel() const;

    void setVida( double nuevaVida);
    void setSalud( double nuevaSalud);
    void setAtaque( double nuevoAtaque);
    void setNivel( double nuevoNivel);

    int porcentajeSalud() const;
    void imprimeBarra();
    int calculaAtaque(Personaje& objetivo);
    void recibeAtaque(int ptosAtaque);
    void atacar(Personaje& objetivo);
    void imprimir();

    private:
    double vida, salud, ataque, nivel; 

};