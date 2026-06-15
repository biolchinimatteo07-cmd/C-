# Projet Licorne – C++

Mon premier projet en C++ orienté objet.

## Description

Ce projet crée une classe `licorne` avec un attribut `nom` et une méthode `manger()`. L'objectif était de comprendre les bases de la **programmation orientée objet (POO)** en C++ : classes, constructeur, destructeur et méthodes.

## Structure des fichiers

```
projet-licorne/
├── licorne.h       # Déclaration de la classe licorne
├── licorne.cpp     # Implémentation de la classe
└── main.cpp        # Point d'entrée du programme
```

## Fonctionnement

- La classe `licorne` contient un attribut privé `nom` (initialisé à `"Matteo"` dans le constructeur)
- La méthode `manger()` affiche un message dans la console
- Dans le `main`, on instancie un objet `ma_licorne` et on appelle sa méthode `manger()`

## Compilation

```bash
g++ main.cpp licorne.cpp -o licorne
./licorne
```

## Ce que j'ai appris

- Créer une classe en C++ avec un fichier `.h` (header) et un `.cpp`
- Utiliser un constructeur et un destructeur
- Déclarer des attributs privés et des méthodes publiques
- Instancier un objet et appeler ses méthodes

## Auteur

Matteo – premier projet C++ POO
