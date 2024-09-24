#include <iostream>

//Se crea la clase "Fecha"
class Fecha{
//Se le asignan atributos a los objetos de la clase "Fecha"
  private:
    int dia, mes, anio;
//Se le asignan metodos a los objets de la clase "Fecha"
  public:
    //Metodo constructor "Fecha" del objeto dentro de la clase Fecha
    Fecha(int,int,int);
    Fecha(long);
    void mostrarFecha();
};

//Constructor "Fecha" de la clase "Fecha" 
Fecha::Fecha(int _dia, int _mes, int _anio){
  anio=_anio;
  mes=_mes;
  dia=_dia;
}

//Constructor 2 "Fecha" de la clase "Fecha" tipo long
Fecha::Fecha(long fecha){
  anio=int(fecha/10000);  //Extraer el anio
  mes=int((fecha-anio*10000)/100);  //Extraer el mes
  dia=int((fecha-anio*10000)-mes*100);  //Extraer el dia
}

//Se crea el metodo "MostrarFecha" de la clase "Fecha"
void Fecha::mostrarFecha(){
  std::cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<std::endl;
}
int main() {
  //Creacion del objeto "hoy" y "ayer" de la clase "Fecha"
  Fecha hoy=Fecha(25,02,2023);
  Fecha ayer=Fecha(20230224);

  //Se llama al objeto "hoy" y "ayer" con el metodo "mostrarFecha"
  hoy.mostrarFecha();
  ayer.mostrarFecha();
}