# objetnote

TP note d'objet en c++

Objectifs
On veut implémenter un système de calcul symbolique capable de consommer une chaîne de caractère contenant une expression mathématique en polonaise inversée et, pour un jeu de valeurs arbitraires, évaluer l’expression mathématique ainsi construite. Ainsi, pour la chaîne de caractère 3 y * x + et les valeurs x = 2 et y = 4, le résultat attendu est calculé comme 2 + 3 * 4 = 16.

On ne s’intéressera pas a priori à la validation de la chaîne ni au traitement des erreurs qui y sont liés.

Etape 1 – Éléments de représentation de l’expression
Une expression mathématique se compose dans notre cas de constante entière, de variable entière, d’opérateurs et de leur agrégation sous forme d’arbre de syntaxe.

Implémentez une classe constante qui contient une valeur entière et les fonctions nécessaires à sa création et à sa manipulation


Implémentez une classe variable qui contient le nom de la variable sous forme d’un unique caractère et les fonctions nécessaires à sa création et à sa manipulation


Comme indiqué, les expressions mathématiques complexes se représentent sous forme d’arbre. Une stratégie classique consiste à représenter cet arbre via une structure arborescente portée par la représentation des opérateurs.

Implémentez une classe operator qui va contenir le caractère représentant le symbole de l’opération, les fonctions nécessaires à sa création et à sa manipulation et une fonction membre prenant 2 paramètress entiers et retournant le résultat de l’opérateur appliqué à ces paramètres. Limitez vous aux opérations de type + - * et /.


Implémentez une classe node qui contient à la fois une instance de la classe operator et deux pointeurs vers les sous-arbres de ce nœud. Quel type de pointeur est-il conseiller d’utiliser ?


Afin de déboguer votre code, utilisez un Design Pattern afin de modifier votre code pour permettre de parcourir une expression mathématique arbitraire et afficher son contenu (valeur des constante, nom des variables, symboles des opérateurs) sous la forme d’une expression classique.


Testez votre code en construisant manuellement des expressions de complexités croissantes
