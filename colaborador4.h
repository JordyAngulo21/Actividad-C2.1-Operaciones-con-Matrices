#include<iostream>
#include<stdlib.h>
using namespace std;

void transpuesta(float matriz1[5][5], float resultado[5][5])
{

cout<<"Obtener la transpuesta de una matriz";

cout<<"\nMatriz Normal\n";
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<matriz1[i][j]<<" ";
		}
		cout<<"\n";
	}

}

void mostrar5( float matriz1[5][5])
{

cout<<"Obtener la transpuesta de una matriz";

cout<<"\nMatriz Transpuesta\n";
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<matriz1[j][i]<<" ";
		}
		cout<<"\n";
	}

}
