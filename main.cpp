#include<iostream>
using namespace std;

	struct {
		float precio=0,cantidad;
	} productos[4];
 
	struct {
		string nombreCliente;
	} clientes[4];
 
	int main()
	{
		int i;
 
		//Llenar datos
		for (i=0; i<4; i++) {
			//datos del cliente
			cout << "Nombre del Cliente: \n ";
			getline(cin,clientes[i].nombreCliente);
			cin.ignore();
 
			//datos del producto
			cout << "Precio del producto: ";
			cin >> productos[i].precio;
			cout << "Unidades vendidas: ";
			cin >> productos[i].cantidad;
			cin.ignore();
 
		}
 
	return 0;
	system ("pause");
}
