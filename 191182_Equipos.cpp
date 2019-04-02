#include <iostream>
using namespace std;

void equipos();
void imprimirmat(int i,int j);
void resultado(int i,int j);
int matriz [4][5];

main (){
	int i,j;
	equipos();
	imprimirmat(i,j);
	resultado(i,j);
	
}

void equipos(){
	int i,j;
	cout<<"EQUIPO\n";
	cout<<"0.- BARCELONA\n";
	cout<<"1.-ATLETICO DE MADRID\n";
	cout<<"2.-REAL MADRID\n";
	cout<<"3.-GETAFE\n";
	cout<<"4.-ALAVES\n";
	cout<<"\n";
	cout<<"DATOS DEL EQUIPO\n";
	cout<<"0.-Partidos jugados\n";
	cout<<"1.-Partidos Ganados\n";
	cout<<"2.-Partidos Empatados\n";
	cout<<"3.-Partidos Perdidos\n";
	cout<<"\n";
	for (i=0;i<5;i++){
		for(j=0;j<4;j++){
			cout<<"ingrese los datos de :\n";
			cout<<"["<<i<<"]"<<"(equipo)";
			cout<<"["<<j<<"]"<<"(Datos del equipo)";
            cin>>matriz[i][j];
		}

	}
	
}

void resultado(int i, int j){
	
        for(i=0;i<5;i++){
        	for (j=0;j<4;j++){
        	matriz[i][4]=(matriz[i][1]*3)+(matriz[i][2]*1);	
			}

	}
}

void imprimirmat(int i, int j){

	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			resultado(i,j);
			cout<<"["<<matriz[i][j]<<"]";
		}
		cout<<"\n";
	}
	
}


