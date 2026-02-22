# Bienvenue
Programme C++ qui affiche "bienvenue le monde !"en utilisant la fonction `afficher Bienvenue()`
## Correctif 
Documentation mise à jour.
##Exemple d'exécution
La focntion afficherBienvenue() accepte maintenant un second paramètre nbAffichage permettant permettant d'afficher le message plusieurs fois.
```sh
$ make rebuild
Fabrication du programme : bienvenue
rm -f *.o
g++ -c -Wall -std=c++11 bienvenue.cpp
g++ -c -Wall -std=c++11 fonction-bienvenue.cpp
g++ -o bienvenue bienvenue.o fonction-bienvenue.o
$./bienvenue
Bienvenue le monde!
## Utilisation
./bienvenue ["bonjou!] [nbAffichage]
```
le contenu d'un fichier source C++ :
```cpp
#ifndef FONCTION_BIENVENUE_H
#define FONCTION_BIENVENUE_H
void afficherBienvenue();
#endif //Fonction_BIENVENUE_H
```
