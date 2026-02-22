# Bienvenue
Programme C++ qui affiche "bienvenue le monde !"en utilisant la fonction `afficher Bienvenue()`
##Exemple d'exécution
```sh
$ make rebuild
Fabrication du programme : bienvenue
rm -f *.o
g++ -c -Wall -std=c++11 bienvenue.cpp
g++ -c -Wall -std=c++11 fonction-bienvenue.cpp
g++ -o bienvenue bienvenue.o fonction-bienvenue.o
$./bienvenue
Bienvenue le monde!
```
le contenu d'un fichier source C++ :
```cpp
#ifndef FONCTION_BIENVENUE_H
#define FONCTION_BIENVENUE_H
void afficherBienvenue();
#endif //Fonction_BIENVENUE_H
```
