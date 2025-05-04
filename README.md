<img src="git_utils/banner.png" width= 100%>

<br>

---

<br>

<details>
<summary>FRENCH VERSION</summary>

## Exercice 00 - "Start with a few functions"

<details>
  <summary>Afficher/Masquer</summary>

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

</details>

<br>

---

<br>

## Exercice 01 - "Iter"

<details>
  <summary>Afficher/Masquer</summary>

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

</details>

<br>

---

<br>

### Exercice 02 - "Array"

<details>
  <summary>Afficher/Masquer</summary>

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

</details>

<br>

</details>

<br>

---

<br>

<details>
<summary>ENGLISH VERSION</summary>

## Exercise 00 - "Start with a few functions"

<details>
	<summary>Show/Hide</summary>

#### Objective:
The goal is to implement the following function templates that can be called with any type of argument, provided both arguments are of the same type and support all comparison operators:
- `swap`: Swaps the values of two given arguments. Does not return anything.
- `min`: Compares the two values passed as arguments and returns the smaller one. If both are equal, returns the second.
- `max`: Compares the two values passed as arguments and returns the larger one. If both are equal, returns the second.

These functions must be defined in header files.

### My Implementation:

[Link here](https://github.com/aceyzz/CPP07/tree/main/ex00)

- **Function `swap`**: Swaps the values of two arguments of any type that supports assignment.

- **Function `min`**: Returns the smaller of the two values passed as arguments, or the second if they are equal.

- **Function `max`**: Returns the larger of the two values passed as arguments, or the second if they are equal.

The function templates are implemented to work with any type of argument as long as they can be compared and assigned. This includes built-in types like `int`, `float`, `double`, as well as complex types like `std::string`.

#### Tests:
Tests are conducted to demonstrate the flexibility of these functions with different types:
- Integers, to test basic operations.
- Floats, to verify the precision of comparisons and swaps.
- Doubles, to evaluate large-scale comparisons and conversions.
- Characters, to test swaps and comparisons of ASCII values.
- Strings (`std::string`), to test operations on complex types.
- Booleans, to evaluate logical swaps and comparisons.

These tests show that the `swap`, `min`, and `max` functions work correctly with various types, demonstrating the efficiency and versatility of function templates in C++.

</details>

<br>

---

<br>

## Exercise 01 - "Iter"

<details>
	<summary>Show/Hide</summary>

#### Objective:
The goal is to implement the `iter` function template that takes 3 parameters and does not return anything:
- The first parameter is the address of an array.
- The second is the length of the array.
- The third is a function that will be called on each element of the array.

Your `iter` function must work with any type of array. The third parameter can be an instantiated function template.

### My Implementation:

[Link here](https://github.com/aceyzz/CPP07/tree/main/ex01)

- **Function `iter`**: This function template iterates over each element of an array, applying a given function to each element. This implementation supports any type of array element, as long as it can be passed to the provided function as the third argument.

- **Function `printer`**: A template function used as an example of a function that can be passed to `iter`. It simply prints the value of the element it is called on, demonstrating the flexibility of `iter` to work with different actions.

#### Tests:

Tests are conducted with different types of arrays to demonstrate the universality and flexibility of the `iter` function:
- **Integer arrays (`int`)**: To test iteration and function application on simple types.
- **Floating-point arrays (`double`)**: To evaluate behavior with floating-point types.
- **Boolean arrays (`bool`)**: To verify manipulation of logical types.
- **Character arrays (`char`)**: To test with character types and simple string manipulations.
- **String arrays (`std::string`)**: To demonstrate iteration on complex types representing sequences of characters.
- **Integer vectors (`std::vector<int>`)**: Although not explicitly mentioned in the subject, this test illustrates the use of `iter` with a standard library container, showing its compatibility beyond primitive arrays.

These tests confirm that the `iter` function is well-designed to be reused with a wide variety of data types and actions, highlighting the power and flexibility of templates in C++.

</details>

<br>

---

<br>

### Exercise 02 - "Array"

<details>
	<summary>Show/Hide</summary>

#### Objective:
Develop a class template `Array` that contains elements of type `T` and implements the following behaviors and functions:
- **Default constructor**: Creates an empty array.
- **Constructor with an `unsigned int n` parameter**: Creates an array of `n` elements initialized by default.
- **Copy constructor and assignment operator**: In both cases, modifying the original array or its copy after copying should not affect the other array.
- **Use of `new[]` for memory allocation**: Preventive allocation is prohibited. The program must never access unallocated memory.
- **Access to elements via the subscription operator `[ ]`**: If its index is out of bounds, a `std::exception` is thrown.
- **Member function `size()`**: Returns the number of elements in the array without modifying the current instance.

### My Implementation:

[Link here](https://github.com/aceyzz/CPP07/tree/main/ex02)

- **Class `Array`**: This class template supports dynamic allocation of an array of elements of type `T`, deep copy management to avoid side effects between copies, and secure access control to elements via the `[ ]` operator.

- **Exception handling**: Implementation of a custom exception `OutOfBoundsException` to handle out-of-bounds access cases, enhancing the robustness of the class.

#### Tests:

- **Variable-sized arrays**: Creation of arrays with different sizes and types to test the flexibility of the `Array` class template.
- **Constructor tests**: Validation of data separation between instances via copy constructors and the assignment operator to ensure independence of copies.
- **Secure access and exceptions**: Attempts to access out-of-bounds indices to demonstrate effective exception handling and access security.
- **Usage with complex types**: Demonstration of the use of `Array` with `std::string`, illustrating its ability to handle more complex types than primitive types.

This implementation demonstrates the versatility and safety of the `Array` class template, offering fine-grained management of dynamic arrays with the guarantee of secure manipulation and independence of copies.

</details>

<br>

</details>