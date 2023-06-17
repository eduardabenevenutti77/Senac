#include <iostream>
#include <stdio.h>
using namespace std;
double result=1,result1=7;
float denominador=3, numerador=2;

float calcularTermos1(int termos){
	for (int i=2;i<=termos;i++) 
  { 
      result = result + (1/denominador);
      denominador*=3;
   }
   cout<<"\n O resultado é: "<<result;
   cout<<"\n\n\n\n\n"; 
}
float calcularTermos2(int termos){
	for (int i=2;i<=termos;i++) 
  { 
      result1 = result1 + (7/denominador);
      denominador*=3;
   }
   cout<<"\n O resultado é: "<<result1;
   cout<<"\n\n\n\n\n"; 
}
float calcularTermos3(int termos){
	for (int i=2;i<=termos;i++) 
  { 
      result = result + (numerador/denominador);
      denominador*=3;
      numerador *=2;
   }
   cout<<"\n O resultado é: "<<result;
   cout<<"\n\n\n\n\n"; 
}
float calcularTermos4(int termos){
	for (int i=2;i<=termos;i++) 
  { 
      result = (result + (numerador/denominador)*-1);
      denominador*=3;// neste caso o denominador deve ser uma nova variável
      numerador *=2;
   }
   cout<<"\n O resultado é: "<<result;
   cout<<"\n\n\n\n\n"; 
}
float calcularTermos5(int termos){
	for (int i=2;i<=termos;i++) 
  { 
      result = (result + (denominador/numerador)*-1);
      denominador*=3;// neste caso o denominador deve ser uma nova variável
      numerador *=2;
   }
   cout<<"\n O resultado é: "<<result;
   cout<<"\n\n\n\n\n";
}