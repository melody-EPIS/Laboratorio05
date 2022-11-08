#include <iostream>
using namespace std;
 
int main()
{
  struct tClientes{
    char nombre [50];
    char apellidos [100];
    char Estado_Factura;
    int unidades;
    float Valor_Unidad;
  };
  const int dimension = 100;
  tClientes listaClientes[dimension];
  tClientes tempClientes;
  int Cont_Clientes=0;
  char G_Continuar='S';
  int contadorMoroso= 0,contadorAtrasado= 0,contadorPagado= 0,  sumatoriaClientes= 0;
  int opcion1;
    for (int i = 0; i < dimension; i++) {
      std::cout << "Registro de Clientes #"<<i+1 << '\n';
      std::cout << "Ingrese los nombres" << '\n';
      std::cin >> tempClientes.nombre;
      std::cout << "Ingrese los apellidos" << '\n';
      std::cin >> tempClientes.apellidos;
      std::cout << "Número de unidades solicitadas" << '\n';
      std::cin >> tempClientes.unidades;
      std::cout << "El precio de cada unidad" << '\n';
      std::cin >> tempClientes.Valor_Unidad;
      std::cout << "Estado de la Factura(M: Moroso  A: Atrasado  P: PAgado)" << '\n';
      std::cin >> tempClientes.Estado_Factura;
      std::cout << " " << '\n';
 
      listaClientes[i]= tempClientes;
      Cont_Clientes++;
 
      std::cout << "Desea Registrar un Nuevo Cliente " << '\n';
      std::cout << ">>Presione (n o N) para Ir al Menu de Opciones" << '\n';
      std::cout << ">>Presione (s o S) para un Nuevo Registro" << '\n';
      std::cin >> G_Continuar;
      if (G_Continuar == 'n' || G_Continuar == 'N')
        break;
    }
 
    do{
      contadorMoroso    = 0;
      contadorAtrasado  = 0;
      contadorPagado    = 0;
      sumatoriaClientes=0;
      do{
        system("cls");
        std::cout << "----------- MENU PRINCIPAL -------------" << '\n';
        std::cout << "1. La lista de nombres de los clientes con facturas en estado moroso." << '\n';
        std::cout << "2. La lista de nombres de clientes en estado pagado con factura mayor a una cantidad ingresada" << '\n';
        std::cout << "3. Salir del Programa" << '\n';
        std::cout << "Digite la Opcion deseada" << '\n';
        std::cin >> opcion1;
      }while(opcion1 < 1 || opcion1 > 3);
 
      switch(opcion1){
          case 1:
          for (int i = 0; i <Cont_Clientes; i++)
          {
            tempClientes = listaClientes[i];
            if (tempClientes.Estado_Factura == 'M')
            {
              cout << "\t" << tempClientes.nombre << "\t" << tempClientes.apellidos
              << "\t" << tempClientes.Estado_Factura << "\t" << tempClientes.unidades
              << "\t" << tempClientes.Valor_Unidad << endl ;
              contadorMoroso ++;
            }
 
          }
          std::cout << "La lista de nombres de los clientes con facturas en estado moroso : " << contadorMoroso <<'\n';
          break;
          
          case 2:
          for (int i = 0; i <Cont_Clientes; i++)
          {
            tempClientes = listaClientes[i];
            if (tempClientes.Estado_Factura == 'P')
            {
              cout << "\t" << tempClientes.nombre << "\t" << tempClientes.apellidos
              << "\t" << tempClientes.Estado_Factura << "\t" << tempClientes.unidades
              << "\t" << tempClientes.Valor_Unidad << endl ;
              contadorPagado ++;
            }
          }
          std::cout << "La lista de nombres de clientes en estado pagado con factura mayor a una cantidad ingresada : " << contadorPagado <<'\n';
 
          break;
          case 3:
          return 0;
      }
    system("pause");
  }while (true);
 
}
