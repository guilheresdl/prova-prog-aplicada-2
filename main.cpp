#include <iostream>
#include <string.h>
#include <string>
#include <cstring>

using namespace std;

int trocas(char *ponteiro,int elm,char a, char n, char *ponteiro2){
int troca=0;
int i;
for(i=0;i<elm;i++){
  cout << ponteiro[i];
}

for(i=0;i<elm;i++){
  if (ponteiro[i]==a){
    ponteiro2[i]=n;
    troca ++;
  }
}

cout <<"\n";
for(i=0;i<elm;i++){
  cout << ponteiro2[i];
}
cout<<"\n";
return troca;
}


int main() {

char *caracteres;
string palavra;
char ant;
char nov;
char *palavranova;
cout << "Digite uma palavra:\n";
cin >> palavra;
caracteres = &palavra[0];
palavranova = caracteres;
int tamanho = strlen(caracteres);

cout << "Qual caractere deseja substituir?\n";
cin >> ant;
cout << "Qual caractere deseja pôr no lugar?\n";
cin >> nov;

cout << trocas(caracteres,tamanho,ant,nov,palavranova);

}