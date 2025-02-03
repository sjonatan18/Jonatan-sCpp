#include <iostream>
#include <string>

using namespace std;

class Articulo {
protected:
    string nombre;
    double precio;
public:
    Articulo(string _nombre, double _precio) : nombre(_nombre), precio(_precio) {}

    string getNombre() { return nombre; }
    void setNombre(string _nombre) { nombre = _nombre; }

    double getPrecio() { return precio; }

    virtual double getParteIVA() = 0;
};

class Tipo4 : public Articulo {
public:
    Tipo4(string _nombre, double _precio) : Articulo(_nombre, _precio) {}

    double getParteIVA() override {
        return precio * 0.04;
    }
};

class Tipo7 : public Articulo {
public:
    Tipo7(string _nombre, double _precio) : Articulo(_nombre, _precio) {}

    double getParteIVA() override {
        return precio * 0.07;
    }
};

class Tipo16 : public Articulo {
public:
    Tipo16(string _nombre, double _precio) : Articulo(_nombre, _precio) {}

    double getParteIVA() override {
        return precio * 0.16;
    }
};

int main() {
    Tipo4 articulo1("Teclado Mecanico", 2500);
    Tipo7 articulo2("Silla Gamer", 5175);
    Tipo16 articulo3("Computadora", 19500);

    cout << "Articulo: " << articulo1.getNombre() << ", Precio: " << articulo1.getPrecio() 
         << ", IVA: " << articulo1.getParteIVA() << endl;

    cout << "Articulo: " << articulo2.getNombre() << ", Precio: " << articulo2.getPrecio() 
         << ", IVA: " << articulo2.getParteIVA() << endl;

    cout << "Articulo: " << articulo3.getNombre() << ", Precio: " << articulo3.getPrecio() 
         << ", IVA: " << articulo3.getParteIVA() << endl;

    return 0;
}