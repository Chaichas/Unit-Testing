#include <iostream>

#ifndef  MYLIB_H
#define MYLIB_H

namespace MyLib{

class MyClass {
public :
  void print();
  
  //Ajout d'une méthode value dans MyClass retournant un entier
  
  int value (int val){
 	//int val = rand()%1000; //val is a random integer in range 0 to 999
  	return val;
  }   
	
};
};

#endif

//Rq: A chaque fois on supprime le build et on recompile
