#include <iostream>
using namespace std;

class Vehiculo {
protected:
    string marca;
    string modelo;
    int año;

public:
    Vehiculo(string m, string mod, int a) : marca(m), modelo(mod), año(a) {}

    virtual void mostrarInfo() {
        cout << "Marca: " << marca << ", Modelo: " << modelo << ", Año: " << año << endl;
    }

    virtual void arrancar() {
        cout << "El vehículo está arrancando..." << endl;
    }
};

class Coche : public Vehiculo {
private:
    int numPuertas;

public:
    Coche(string m, string mod, int a, int puertas) : Vehiculo(m, mod, a), numPuertas(puertas) {}

    void mostrarInfo() override {
        Vehiculo::mostrarInfo();
        cout << "Número de puertas: " << numPuertas << endl;
    }

    void arrancar() override {
        cout << "El coche está arrancando suavemente..." << endl;
    }
};

class Moto : public Vehiculo {
private:
    bool tieneCasco;

public:
    Moto(string m, string mod, int a, bool casco) : Vehiculo(m, mod, a), tieneCasco(casco) {}

    void mostrarInfo() override {
        Vehiculo::mostrarInfo();
        cout << "¿Tiene casco? " << (tieneCasco ? "Sí" : "No") << endl;
    }

    void arrancar() override {
        cout << "La moto está arrancando con un rugido..." << endl;
    }
};

class Camion : public Vehiculo {
private:
    float capacidadCarga;

public:
    Camion(string m, string mod, int a, float carga) : Vehiculo(m, mod, a), capacidadCarga(carga) {}

    void mostrarInfo() override {
        Vehiculo::mostrarInfo();
        cout << "Capacidad de carga: " << capacidadCarga << " toneladas" << endl;
    }

    void arrancar() override {
        cout << "El camión está arrancando con potencia..." << endl;
    }
};

int main() {
    Coche miCoche("Toyota", "Corolla", 2005, 4);
    Moto miMoto("Honda", "CBR600", 2022, true);
    Camion miCamion("Kia", "K2700", 2018, 1.5);

    cout << "\n--- Coche ---\n";
    miCoche.mostrarInfo();
    miCoche.arrancar();

    cout << "\n--- Moto ---\n";
    miMoto.mostrarInfo();
    miMoto.arrancar();

    cout << "\n--- Camión ---\n";
    miCamion.mostrarInfo();
    miCamion.arrancar();

    return 0;
}
