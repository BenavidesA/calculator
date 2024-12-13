# Calculadora Básica en C

Este proyecto es una calculadora básica que realiza operaciones aritméticas simples como suma, resta, multiplicación y división. El usuario interactúa mediante la consola para ingresar los números, seleccionar el operador deseado y decidir si continuar con más operaciones.

## Características

- Soporte para las operaciones básicas: `+`, `-`, `*`, `/`.
- Entrada interactiva del usuario.
- Validación de opciones para continuar o finalizar el programa.
- Separación de funciones de las operaciones en el archivo `funciones.h`.

## Estructura del Proyecto

El programa se divide en los siguientes archivos:
- `main.c`: Contiene la lógica principal del programa.
- `funciones.h`: Declaraciones y definiciones de las funciones de suma, resta, multiplicación y división.

## Cómo Usar

1. **Compilación**: 
   Usa un compilador como `gcc` para compilar el programa.
   ```bash
   gcc main.c funciones.c -o calculadora
2. **Ejecución**
   ./calculadora
