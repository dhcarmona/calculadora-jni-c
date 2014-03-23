calculadora-jni-c
=================

Diego Carmona Salazar - 201115045

Tarea Corta 1 - Aplicaciones para Dispositivos Móviles
  
    El DLL nativo en C está en la carpeta raíz del proyecto de Netbeans, se llama "Aritmetica.dll". Fue compilado en
    Windows 8.1 x64 usando Cygwin 4, aunque debe poder compilarse en cualquier otro entorno siempre y cuando:
      - Se incluyan las librerías y los headers de JNI que vienen con el JDK respectivo.
      - Se compila con la arquitectura correcta, igual a con la que se compila el proyecto de Java.
      - El archivo .DLL debe estar en la carpeta raíz del proyecto de Netbeans.
    
    La clase Aritmetica buscará un archivo Aritmetica.dll que pueda leer y que esté compilado correctamente, y que exponga
    el header AritmeticaNativa.h del proyecto AritmeticaNativa.
