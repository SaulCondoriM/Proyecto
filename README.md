<center>

![Logo](https://github.com/SaulCondoriM/Proyecto/blob/main/docs/unsa_logo.png)

</center>

<h3 align="center">Proyecto Final CCII </h3>
<h2 align="center"> BLASTER GAME </h2>
<h3 align="center">*Videojuego Multiplayer - Shooter - C++ - Unreal Engine* </h3>

------------


###  **Autores:**
  * Condori Machaca Saul Arturo		
  * Ochoa Ortiz Sebastian Andre	
  * Soncco Pacco Ivan Ulises	
  * Vargas Mamani Albert	

------------
### **Información del Proyecto**
Nuestro proyecto es un videojuego en 3D, el cual sera desarrollado hacieno uso del motor grafico Unreal Engine.
El videojuego es un shooter en tercera persona que ademas es multiplayer con conexion a Steam y EpicGames.

------------
### **Objetivos**
	1. Conectar varias personas a una misma partida.
	2. Aplicar los conocimientos adquiridos en el curso de CCII e implementarlos en nuestro videojuego.
	3. Desarrollar un videojuego que responda a eventos activados por el usuario.

------------
### **Aclaraciones con respecto a C++ y Unreal Engine 5 (IMPORTANTE LEER)**

UE5 no usa la biblioteca estándar de C ++ (bueno, la usa en el backend, pero no espera que la use), UE5 tiene su propia implementación y sistema de reflexión solo funcionará con él, si usa la biblioteca estándar C ++ con las API UE5, terminará con errores,
Úselo solo cuando desee interactuar con bibliotecas externas. Por lo tanto, los nombres de las funciones y los tipos serán diferentes en UE5 de lo que se ve normalmente en el lenguaje de C++, por ejemplo, en lugar de std::string se utiliza FString, en lugar de std::vector es TArray, etc.
Teniendo en cuenta que ya conoce algunos de los planos, debe tener una idea de cómo se construye UE5, C ++ no es realmente diferente de él, de hecho, ademas del codigo en C++, se utiliza algo llamado "Blueprints", que permite a los desarrolladores crear videojuegos de una forma más sencilla y visual, añadiendo funcionalidades a las clases de juego existentes. Este método no sustituye a la programación C++, sino que es un complemento, ya que los dos sistemas están perfectamente coordinados e integrados entre sí.

------------
### **ORGANIZACION DEL GITHUB**
(GameAssets)

  * Animations ---> Animaciones del movimiento en general del personaje, armas y municiones - (Archivos Unreal Engine)
  * Crosshairs ---> Mirilla de cada una de las armas, PRIMARY(mira armas en general), SHOTHUN(mira armas especifico) - (Archivos Unreal Engine)
  * FX ---> Animaciones de armas especiales (lanzacuetes, granadas, francotirador)
  * Materials ---> Asssets netamente para construir un mapa (Mapa del juego)
  * Meshes ---> Mallas del juego (Graficos dentro del juego)
  * Shells ---> Efectos de Sonido (Archivos tipo .WAV)
  * Textures ---> Texturas dentro del juego (Iconos como vida, escudo, municion, etc)
  
(MultiplayerSessions)

  * Binaries ---> Archivos Unreal Engine para que funciones el Plugin
  * Content ---> Asset del plugin dentro del Menu
  * Source ---> Codigo del Plugin
  
(Source)

  * Source ---> Todo el codigo de nuestro proyecto
  
(docs)

  * Docs ---> Archivos utilizados en el README.md
  
------------
### **Como Instalar Ejecutable**
(WINDOWS)

  * Tener una cuenta de STEAM (si no la posee, descargarla en el siguiente enlace : https://store.steampowered.com/?l=spanish)
  * Una vez abierto STEAM, en la esquina superior izquierda seleccionar STEAM --> PARAMETROS --> DESCARGAS --> Asegurarse que la region de descarga este en Peru - Lima, ya que este sera al servidor al que se conectara el juego para que todos puedan jugar.
 ![Steam](https://github.com/SaulCondoriM/Proyecto/blob/main/docs/CapturaSteam.PNG)
  * Descargar el juego en el siguiente enlace: https://drive.google.com/drive/folders/1QS1td01eDyQDzu6-kR5tv6rMvgA9srKG?usp=sharing	
  * Ejecutar el archivo "Blaster.exe".
![Menu](https://github.com/SaulCondoriM/Proyecto/blob/main/docs/Menu.PNG)

------------
### **Como Jugar**
  * El host seleccionara la cantidad de jugadores y escogera el modo a jugar, luego seleccionara "CREAR".
  * Una vez creada la sesion, los jugadores seleccionaran "UNIRSE".
  * Utiliza W A S D para moverte.
  * Tecla E para poder cambiar de arma.
  * Tecla R para recargar.
  * Click Izquiero para Disparar
  * Click Derecho para Apuntar.

![Apuntar](https://github.com/SaulCondoriM/Proyecto/blob/main/docs/Apuntar.PNG)

