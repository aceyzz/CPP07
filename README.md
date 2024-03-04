<img src="utils/CPP07.png" width= 100%>

<br>


## Sujet : Exercice 00 - "Start with a few functions"

#### Objectif :
L'objectif est d'implémenter les modèles de fonction suivants qui peuvent être appelés avec n'importe quel type d'argument, à condition que les deux arguments aient le même type et prennent en charge tous les opérateurs de comparaison :
- `swap`: Échange les valeurs de deux arguments donnés. Ne renvoie rien.
- `min`: Compare les deux valeurs passées en arguments et renvoie la plus petite. Si les deux sont égales, renvoie la seconde.
- `max`: Compare les deux valeurs passées en arguments et renvoie la plus grande. Si les deux sont égales, renvoie la seconde.

Ces fonctions doivent être définies dans les fichiers d'en-tête.

### Mon Implémentation :

[Lien ici](https://github.com/aceyzz/CPP07/tree/main/ex00)

- **Fonction `swap`** : Échange les valeurs de deux arguments de n'importe quel type supportant l'affectation.

- **Fonction `min`** : Retourne la plus petite des deux valeurs passées en argument, ou la seconde si elles sont égales.

- **Fonction `max`** : Retourne la plus grande des deux valeurs passées en argument, ou la seconde si elles sont égales.

Les modèles de fonction sont implémentés pour fonctionner avec n'importe quel type d'argument tant qu'ils peuvent être comparés et affectés. Cela inclut les types intégrés comme `int`, `float`, `double`, ainsi que les types complexes comme `std::string`.

#### Tests :
Des tests sont réalisés pour démontrer la flexibilité de ces fonctions avec différents types :
- Integers, pour tester les opérations de base.
- Flottants, pour vérifier la précision des comparaisons et des échanges.
- Doubles, pour évaluer les conversions et les comparaisons à grande échelle.
- Caractères, pour tester les échanges et les comparaisons de valeurs ASCII.
- Chaînes de caractères (`std::string`), pour tester les opérations sur des types complexes.
- Booléens, pour évaluer les échanges et les comparaisons logiques.

Ces tests montrent que les fonctions `swap`, `min`, et `max` fonctionnent correctement avec divers types, démontrant l'efficacité et la polyvalence des modèles de fonction en C++.

<br>

---

<br>

## Sujet : Exercice 01 - "Iter"

#### Objectif :
L'objectif est d'implémenter le modèle de fonction `iter` qui prend 3 paramètres et ne renvoie rien :
- Le premier paramètre est l'adresse d'un tableau.
- Le second est la longueur du tableau.
- Le troisième est une fonction qui sera appelée sur chaque élément du tableau.

Votre fonction `iter` doit fonctionner avec tout type de tableau. Le troisième paramètre peut être une fonction template instanciée.

### Mon Implémentation :

[Lien ici](https://github.com/aceyzz/CPP07/tree/main/ex01)

- **Fonction `iter`** : Ce modèle de fonction itère sur chaque élément d'un tableau, appliquant une fonction donnée à chaque élément. Cette implémentation supporte tout type d'élément de tableau, tant qu'il peut être passé à la fonction fournie en tant que troisième argument.

- **Fonction `printer`** : Une fonction template utilisée comme exemple de fonction pouvant être passée à `iter`. Elle affiche simplement la valeur de l'élément sur lequel elle est appelée, démontrant la flexibilité de `iter` à travailler avec différentes actions.

#### Tests :

Des tests sont effectués avec différents types de tableaux pour démontrer l'universalité et la flexibilité de la fonction `iter` :
- **Tableaux d'entiers (`int`)** : Pour tester l'itération et l'application de fonctions sur des types simples.
- **Tableaux de nombres à virgule flottante (`double`)** : Pour évaluer le comportement avec des types à virgule flottante.
- **Tableaux de booléens (`bool`)** : Pour vérifier la manipulation de types logiques.
- **Tableaux de caractères (`char`)** : Pour tester avec des types de caractères et la manipulation de chaînes de caractères simples.
- **Tableaux de chaînes de caractères (`std::string`)** : Pour démontrer l'itération sur des types complexes représentant des séquences de caractères.
- **Vecteurs d'entiers (`std::vector<int>`)** : Bien que non mentionné explicitement dans le sujet, ce test illustre l'utilisation de `iter` avec un conteneur de la bibliothèque standard C++, montrant sa compatibilité au-delà des tableaux primitifs.

Ces tests confirment que la fonction `iter` est bien conçue pour être réutilisée avec une grande variété de types de données et d'actions, soulignant la puissance et la flexibilité des modèles en C++.


<br>

---

<br>

### Sujet : Exercice 02 - "Array"

#### Objectif :
Développer un modèle de classe `Array` qui contient des éléments de type `T` et qui implémente les comportements et fonctions suivants :
- **Constructeur sans paramètre** : Crée un tableau vide.
- **Constructeur avec un paramètre `unsigned int n`** : Crée un tableau de `n` éléments initialisés par défaut.
- **Constructeur par copie et opérateur d'affectation** : Dans les deux cas, modifier le tableau original ou sa copie après la copie ne doit pas affecter l'autre tableau.
- **Utilisation de `new[]` pour l'allocation mémoire** : L'allocation préventive est interdite. Le programme ne doit jamais accéder à une mémoire non allouée.
- **Accès aux éléments via l'opérateur de souscription `[ ]`** : Si son indice est hors limites, une `std::exception` est lancée.
- **Fonction membre `size()`** : Retourne le nombre d'éléments dans le tableau, sans modifier l'instance courante.

#### Mon Implémentation :

[Lien ici](https://github.com/aceyzz/CPP07/tree/main/ex02)

- **Classe `Array`** : Ce modèle de classe supporte l'allocation dynamique d'un tableau d'éléments de type `T`, la gestion de la copie profonde pour éviter les effets de bord entre copies, et le contrôle d'accès sécurisé aux éléments via l'opérateur `[ ]`.

- **Gestion des exceptions** : Implémentation d'une exception personnalisée `OutOfBoundsException` pour gérer les cas d'accès à des indices hors limites, renforçant la robustesse de la classe.

#### Tests :

- **Tableaux de taille variable** : Création de tableaux avec différentes tailles et types, pour tester la flexibilité du modèle de classe `Array`.
- **Test de constructeurs** : Validation de la séparation des données entre instances via les constructeurs par copie et l'opérateur d'assignation, pour s'assurer de l'indépendance des copies.
- **Accès sécurisé et exceptions** : Tentatives d'accès à des indices hors limites pour démontrer la gestion efficace des exceptions et la sécurité d'accès.
- **Utilisation avec types complexes** : Démonstration de l'utilisation de `Array` avec des `std::string`, illustrant sa capacité à gérer des types plus complexes que les types primitifs.

Cette implémentation démontre la polyvalence et la sécurité du modèle de classe `Array`, offrant une gestion fine des tableaux dynamiques avec la garantie d'une manipulation sécurisée et d'une indépendance des copies.
