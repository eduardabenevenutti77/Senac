#include <iostream>
#include <stdio.h>
using namespace std;
int soma(int n){
	if(n==1){
		return 1;
	}else{
		return (2*n-1)+soma(n-1);
	}
}
int fibonacci(int n){
	if((n==1)|| (n==2)){
		return 1;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
int pot(int b, int p){
	if(p==0){
		return 1;
	}else{
		return b*pot(b,p-1);
	}
}
int media(int n1, int n2){
	if(n2 !=0){
		return media(n2,n1%n2);
	}else{
		return n1;
	}
}