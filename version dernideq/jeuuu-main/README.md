# 🧩 Solveur de Kakuro

Ce projet est un solveur de grilles Kakuro écrit en C++. Il permet de charger des grilles depuis :
- un fichier texte `.kakuro`,
- un fichier JSON `.json`,
- ou bien une saisie manuelle en ligne de commande.

## ✅ Fonctionnalité unique
Le projet inclut une **visualisation pas à pas** de la résolution : à chaque tentative de placement d’un chiffre, la grille est affichée avec la valeur en cours. Cela permet de suivre en temps réel l’évolution du solveur (utile pour le debug ou la démonstration).

## 🏗️ Organisation du projet

```
├── include/            # Bibliothèque externe (ex: json.hpp)
├── headers/            # Tous les .h
├── src/                # Tous les .cpp
├── grilles/            # Fichiers .kakuro et .json
├── kakuro              # Exécutable final
├── README.md
└── rapport.pdf
```

## 🛠️ Compilation

### Depuis Linux
```bash
make
```

### Depuis Windows (PowerShell avec MinGW installé)
```powershell
g++ src/*.cpp -Iheaders -Iinclude -o kakuro.exe
```

## ▶️ Exécution

```bash
./kakuro
```

## Exemple :
```
=== Solveur de Kakuro ===
Choisissez le mode de chargement de la grille :
1. Depuis un fichier texte (.kakuro)
2. Depuis l’entrée utilisateur (manuel)
3. Depuis un fichier JSON (.json)
```

## 📂 Format de grille

**Exemple texte `.kakuro` :**
```
5 4
# # 25/ 2/
# 5/8 _ _
/11 _ 8 5/
/15 2 _ _
# /3 _ _
```

**Exemple JSON :**
```json
{
  "lignes": 5,
  "colonnes": 4,
  "grille": [
    ["#", "#", "25/", "2/"],
    ["#", "5/8", ".", "."],
    ["/11", ".", "8", "5/"],
    ["/15", "2", ".", "."],
    ["#", "/3", ".", "."]
  ]
}
```
