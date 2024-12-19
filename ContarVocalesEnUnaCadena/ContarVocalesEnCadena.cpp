#include <iostream>
using namespace std;
bool esVocal(char c) {
c = tolower(c);
return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int main() {
char str[100];
int contador = 0;
cout << "Ingrese una cadena: ";
cin.getline(str, 100);
for (int i = 0; str[i] != '\0'; ++i) {
if (esVocal(str[i])) {
contador++;
}
}
cout << "El número de vocales en la cadena es: " << contador << endl;
return 0;
}
