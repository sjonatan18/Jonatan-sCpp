#include <iostream>
#include <string>

using namespace std;

class Empleado {
protected:
    string nombre;
public:
    Empleado(string _nombre) : nombre(_nombre) {}

    void setNombre(string _nombre) { nombre = _nombre; }
    string getNombre() { return nombre; }

    virtual string toString() {
        return "Nombre del empleado: " + nombre;
    }
};

class Operario : public Empleado {
public:
    Operario(string _nombre) : Empleado(_nombre) {}

    string toString() override {
        return "Operario: " + nombre;
    }
};

class Directivo : public Empleado {
public:
    Directivo(string _nombre) : Empleado(_nombre) {}

    string toString() override {
        return "Directivo: " + nombre;
    }
};

class Oficial : public Empleado {
public:
    Oficial(string _nombre) : Empleado(_nombre) {}

    string toString() override {
        return "Oficial: " + nombre;
    }
};

class Tecnico : public Empleado {
public:
    Tecnico(string _nombre) : Empleado(_nombre) {}

    string toString() override {
        return "Técnico: " + nombre;
    }
};

int main() {
    Operario empleado1("Emilio");
    Directivo empleado2("Tyra");
    Oficial empleado3("Jonatan");
    Tecnico empleado4("Delmark");

    cout << empleado1.toString() << endl;
    cout << empleado2.toString() << endl;
    cout << empleado3.toString() << endl;
    cout << empleado4.toString() << endl;

    return 0;
}