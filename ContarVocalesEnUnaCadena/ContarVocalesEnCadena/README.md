# Contador de Vocales en una Cadena de Texto

Este programa en C++ toma una cadena de texto ingresada por el usuario y cuenta cuántas vocales (mayúsculas o minúsculas) contiene. Utiliza una función auxiliar para verificar si un carácter es una vocal.

## Propósito del Código

El objetivo de este programa es contar el número de vocales en una cadena proporcionada por el usuario. El código utiliza la función `esVocal` para determinar si cada carácter es una vocal, considerando tanto las letras en minúscula como en mayúscula.

## ¿Qué incluye el código?

1. **Función `esVocal`**
   - La función `esVocal` toma un carácter como argumento y verifica si es una de las vocales 'a', 'e', 'i', 'o' o 'u'. La función convierte el carácter a minúscula utilizando la función `tolower` de la biblioteca `<cctype>`, para que funcione independientemente de si el usuario ingresa una letra en mayúscula o minúscula.
     ```cpp
     bool esVocal(char c) {
         c = tolower(c);
         return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
     }
     ```

2. **Entrada de Datos**
   - El programa solicita al usuario ingresar una cadena de texto mediante `cin.getline()`, que permite ingresar una línea completa, incluyendo espacios.
     ```cpp
     cout << "Ingrese una cadena: ";
     cin.getline(str, 100);
     ```

3. **Contador de Vocales**
   - El programa recorre la cadena de caracteres ingresada utilizando un ciclo `for`. En cada iteración, llama a la función `esVocal` para verificar si el carácter actual es una vocal. Si es una vocal, incrementa un contador.
     ```cpp
     for (int i = 0; str[i] != '\0'; ++i) {
         if (esVocal(str[i])) {
             contador++;
         }
     }
     ```

4. **Mostrar el Resultado**
   - Después de contar todas las vocales, el programa imprime el número total de vocales encontradas en la cadena:
     ```cpp
     cout << "El número de vocales en la cadena es: " << contador << endl;
     ```

## ¿Cómo usar el programa?

1. **Compilación del Código**
   - Usa un compilador de C++ para compilar el archivo fuente:
     ```bash
     g++ contarVocalesEnCadena.cpp -o contarVocalesEnCadena
     ```

2. **Ejecución del Programa**
   - Ejecuta el programa desde la terminal:
     ```bash
     ./contarVocalesEnCadena
     ```

3. **Entrada de Datos**
   - El programa te pedirá que ingreses una cadena. Por ejemplo:
     ```plaintext
     Ingrese una cadena: Hola Mundo
     ```

4. **Resultado**
   - El programa mostrará el número total de vocales en la cadena ingresada. En el caso del ejemplo anterior, el resultado será:
     ```plaintext
     El número de vocales en la cadena es: 4
     ```

## Características Técnicas

- **`tolower()`**: Esta función convierte un carácter a su equivalente en minúscula, lo que permite que las comparaciones de vocales sean insensibles a mayúsculas y minúsculas.
- **Recorrido de la cadena**: El programa utiliza un ciclo `for` para recorrer la cadena y verificar cada carácter individualmente hasta llegar al final de la cadena, indicado por el carácter nulo `\0`.
- **Manejo de cadenas de texto**: El código utiliza arreglos de caracteres para almacenar y procesar la cadena de texto ingresada por el usuario.

## Limitaciones

- El programa asume que la cadena ingresada tiene un máximo de 100 caracteres. Si se ingresan cadenas más largas, el comportamiento puede no ser el esperado.
- No distingue entre vocales con tildes, por lo que no contará como vocales las letras 'á', 'é', 'í', 'ó', 'ú'. Si se desea contar vocales con tildes, sería necesario ajustar la función `esVocal`.

## Personalización

Puedes modificar el tamaño del arreglo `str` si deseas trabajar con cadenas más largas:
```cpp
char str[200]; // Cambiar el tamaño del arreglo para cadenas más largas
