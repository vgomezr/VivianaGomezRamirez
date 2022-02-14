#include <iostream>
#include <fstream>
#include <math.h>

double f(double x){
 return exp(-pow(x,2));
}
double deriv(double x){
    double h= 0.001;
    return (f(x+h)-f(x-h))/(2*h);
}

int main(){

	std::ofstream *File; // Definimos apuntador

	File = new std::ofstream[1]; // Reservamos memoria

	File[0].open( "DatosDerivada.dat.txt", std::ofstream::trunc ); // Abrir y dejar listo para escribir

	std::cout << File  << std::endl;

	for(double i = -20; i < 20; i+= 0.01 ){
		File[0] << i << " " << deriv(i) << std::endl;
		//std::cout << i << std::endl; 
	}


	File[0].close();

	return 0;
}