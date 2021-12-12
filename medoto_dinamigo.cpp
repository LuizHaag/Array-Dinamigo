/*
Implementar um sistema que usuário entre com 6 valore em um array, depois entre com mais 6
 valores e mostre um array com as posições dinamicas de numeros unicos no merge dos arrays.
 */
 	#include <iostream>
		using namespace std;
	
		class uniao{	
		int numero ,i ;
		int resultado ;
		public:
		int dinamigo;
		uniao2(int vettt);
		 MeuNumeroUm(int o);
		 int valor1 [6];
		 int valor2 [6];
		 int valor3 [12];
			
	};
	
		uniao::MeuNumeroUm (int v){
		numero = resultado;
		cout <<"Digite o valor ";
   		
    
		for (i=0;i<6;i++){
		cout <<"digite os valores1 <<" << endl;
		cin  >> valor1 [i] ;
	 }
  		for (i=0;i<6;i++){
		cout <<"digite os valores2 <<" << endl;
		cin  >> valor2 [i] ;
 }
 
		for(i=0;i<6;i++){
		valor3[i]=valor1[i];
}
		for(i=6;i<12;i++){
			valor3[i]=valor2[i-6];
		}
		for(i=0;i<12;i++){
			cout<<valor3[ i]<<" ";
			}
			for(i=0;i<12;i--){
			cout<<valor3[ i]<<" ";
			
		 }
			int main(){
			int i,v[12];
			
			uniao resultado ;
			resultado.valor1(dinamigo);
			
			return 0;
			}
	
