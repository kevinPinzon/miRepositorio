#include <iostream>
#include <stdio.h>
#include <cstring>
#define length(x)

using namespace std;
     
int main (int argc,char**argv){

	char* columnaA[11];
	char frases[16]; 
	char* columnaB[11];
	char conceptos[16];

	int numA,numB;

	cout<<endl<<"		BIENVENIDOS A TERMINOS PAREADOS"<<endl;

	cout<<"cantidad de frases para la columna A: ";
	cin>>numA;

	cout<<"cantidad de definiciones para la columna B: ";
	cin>>numB;
	
	cout<<endl;
	for(int i=0; i<numA; i++){
		cout<<"escriba la frase "<<i+1<<" : "; 
		cin>>frases;
		columnaA[i]= new char[strlen(frases)+1];
		strcpy(columnaA[i],frases);
	}
	columnaA[numA]='\0';

	cout<<endl;
	for(int i=0; i<numA; i++)
		cout<<"frase "<<i+1<<" : "<<columnaA[i]<<endl;

	cout<<endl;	
	for(int i=0; i<numB; i++){
		cout<<"escriba el concepto "<<i+1<<" : ";
		cin>>conceptos;
		columnaB[i]= new char[strlen(conceptos)+1];
		strcpy(columnaB[i],conceptos);
	}
		
//		cin.getline(conceptos,200, '\n');
//		columnaB[i]= new char[strlen(conceptos)+1];
//		strcpy(columnaB[i],conceptos);
//		cin.get();
//	}
	
	columnaB[numB]='\0';

	for(int i=0; i<numB; i++)
		cout<<"concepto "<<i+1<<" : "<<columnaB[i]<<endl;
	int correcta;
	cout<<"empareje las palabras con las definiciones correctas(si no hay respuesta digite 0) "<<endl;

	int respuestasC[numB];


	for(int a=0; a<numB; a++){
		for(int b=0; b<numB; b++)
			cout<<"		"<<b<<". "<<columnaB[b]<<endl;	
		
		cout<<" la respuesta de "<<columnaA[a]<<" es la numero: ";
		cin>>correcta;
		if(correcta>=(0)&&correcta<(numB))
			respuestasC[a]=correcta;							
			
	}

	for(int i=0; i<numB; i++)
		cout<<endl<<"respuesta correcta de: "<<columnaA[i]<<" es: "<<columnaB[respuestasC[i]]<<endl;
	
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl
		<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
//proposito de los endl; que no se miren las respuestas.
	
char continuar;
	double porcentaje=0.0;	
	int respuestasU[numB];
	int contadorA=0,contadorB=0;
	do{
			for(int b=0; b<numB; b++)
				cout<<"		"<<b<<". "<<columnaB[b]<<endl;	
			
			cout<<" la respuesta de "<<columnaA[contadorA]<<" es la numero: ";
			cin>>correcta;
			if(correcta>=(0)&&correcta<(numB))
				respuestasU[contadorA]=correcta;							
		
			if(columnaB[respuestasC[contadorA]]==columnaB[respuestasU[contadorA]])
			porcentaje++;	
	
	
	contadorA++;
	cout<<endl<<"desea continuar(s/n) ";
	cin>>continuar;
	cout<<endl;
	
	if(contadorA>=numB)	
		break;
	
	}while(continuar=='s'||continuar=='S');
	
	cout<<endl<<"porcentaje: "<<(porcentaje/numB)*100<<endl;;
	
	for(int i=0; i<sizeof(columnaA); i++)
		delete[] columnaA[i];
	
	for(int i=0; i<sizeof(columnaB); i++)
		delete[] columnaB[i];
	return 0;
}


