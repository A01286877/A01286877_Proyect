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

    void setVida( double vida);
    void setSalud( double salud);
    void setAtaque( double ataque);
    void setNivel( double nivel);

    int porcentajeSalud() const;
    void imprimeBarra();
    int calculaAtaque(Personaje& objetivo);
    void recibeAtaque(int ptosAtaque);
    void atacar(Personaje& objetivo);
    void imprimir();

    private:
    double vida, salud, ataque, nivel; 

};