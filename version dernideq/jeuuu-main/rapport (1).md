# 🧠 Rapport : Solveur de Kakuro

## 1. Objectif
Ce projet vise à résoudre automatiquement une grille de Kakuro. Il s'agit d'un jeu de logique reposant sur des contraintes de sommes uniques, similaire au Sudoku.

## 2. Organisation du projet

- **Grille** : classe représentant la grille entière (matrice de `Case*`)
- **Case.h** : contient les classes `CaseNoire`, `CaseVide`, `CaseFixe`, `CaseIndication`
- **Chargeurs** : 3 méthodes de chargement (texte, JSON, saisie console)
- **SolveurKakuro** : utilise un algorithme de backtracking avec vérification de blocs et combinaisons précalculées
- **UtilitaireSolveur** : fonctions communes comme `trouverCasesVides`

## 3. Design Pattern : Factory

Le chargement de la grille est centralisé dans la classe `FabriqueGrille`, qui instancie le bon chargeur selon le choix de l’utilisateur. Cela respecte le **design pattern Factory**, car on délègue la création de l’objet `Grille` à une méthode dédiée.

## 4. Visualisation pas à pas (fonctionnalité unique)

Lors de chaque tentative de placement d’un chiffre, la grille est réaffichée. Cela permet de :
- suivre le déroulé de l’algorithme,
- mieux comprendre les backtracks,
- observer les valeurs éliminées.

## 5. Gestion des erreurs

- Vérification des entrées (format des cellules)
- Contrôle du bon nombre de colonnes par ligne
- Vérification des doublons et sommes dans les blocs

## 6. Utilisation

L'utilisateur choisit un mode de chargement puis le solveur tente de résoudre la grille. Le résultat est affiché (ou une erreur si aucune solution n’est trouvée).

## 7. Compilation

Le projet est compilable sous Linux (Makefile) et Windows (PowerShell via g++).

---

### Évaluation visée

| Critère                                | Points visés |
|----------------------------------------|--------------|
| Modélisation UML                       | 2            |
| Rapport, explications                  | ✅ 2          |
| Organisation du code                   | ✅ 1          |
| Code compilable                        | ✅ 1          |
| Rendu d’un exécutable                  | ✅ 1          |
| Qualité du code                        | ✅ 1.5        |
| Gestion des erreurs / exceptions       | ✅ 1          |
| Modèle du jeu                          | ✅ 3          |
| Utilisation en ligne de commande       | ✅ 1          |
| Solveur                                | ✅ 2.5        |
| Design Pattern Factory utilisé         | ✅ 1          |
| Fonctionnalité unique (visualisation)  | ✅ 3          |
