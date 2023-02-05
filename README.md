# tp de programation objet noté

## sujet

On veut implémenter un système de calcul symbolique capable de consommer une chaîne de caractère contenant une expression mathématique en **polonaise inversée** et, pour un jeu de valeurs arbitraires, évaluer l’expression mathématique ainsi construite. La chaîne de caractères écrite en polonaise inversée `3 y * x +` donne dans l'écriture dont nous avons l'habitude `x + 3 * y`. D'une manière plus détaillée, on a la résolution de la formule `3 y * x +` dans cet ordre, de droite à gauche :

* `+`
* `x`
* `(3 y *)`

`(3 y *)` se décompose de la manière suivante :

* `*`
* `y`
* `3`

En écriture habituelle, on a alors : `x + (y * 3)`.

Avec `x = 2` et `y = 4`, le résultat attendu est calculé comme `2 + 3 * 4 = 14`.

On ne s’intéressera pas à la validation de la chaîne (polonaise inversée) ni au traitement des erreurs qui y sont liées.

**ATTENTION : l'énoncé à un peu changé, vérifiez que vous êtes bien à jour (et n'hésitez pas à râler si ça casse ce que vous avez fait précédemment** **le but n'est pas de vous faire perdre du temps.**

**Le TP est à rendre pour dimanche 5 février 20h00 (pour ne pas que vous vous couchiez tard le dimanche).**

### Etape 1 – Éléments de représentation de l’expression

Une expression mathématique se compose dans notre cas de constante entière, de variable entière, d’opérateurs et de leur agrégation sous forme d’arbre de syntaxe.

* Implémentez une classe constante qui contient une valeur entière. Implémentez également les fonctions nécessaires (création et manipulation si besoin).
* Implémentez une classe variable qui contient le nom de la variable sous forme d’un unique caractère. Implémentez également les fonctions nécessaires (création et manipulation si besoin).

Comme indiqué, les expressions mathématiques complexes se représentent sous forme d’arbre. Une stratégie classique consiste à représenter cet arbre via une structure arborescente dont certains noeuds sont des opérateurs.

* Implémentez une classe `operator_t` qui va contenir le caractère représentant le symbole de l’opération, les fonctions nécessaires (création et manipulation si besoin) et une fonction membre prenant 2 paramètres entiers et retournant le résultat de l’opérateur appliqué à ces paramètres (`operator_t::apply(...)` par exemple). Limitez vous aux opérations de type + - * et /.
* Implémentez une classe node qui contient à la fois une instance de la classe `operator_t` et deux pointeurs vers les sous-arbres de ce noeud. Quel type de pointeur est-il conseillé d’utiliser ?
* Pour ce qui va suivre (la fin de l'`Etape 1`), on vous propose d'utiliser un Design Pattern de votre choix, mais vous êtes libres de le faire ou non, faites au plus simple pour vous.
* Faites une fonction d'affichage de votre arbre. Elle retournera une chaîne de caractères (ou écrira directement dans le terminal, n'importe), en écriture mathématique habituelle (exemple : `z + 8 + x * 5`). C'est à vous de construire l'arbre associé. Si vous avez vu les `assert` en cours, faites des assert dans votre code pour vérifier que votre arbre est correct (en plus c'est facile à corriger comme ça).
* Continuez à tester votre code en construisant manuellement des expressions de complexités croissantes, et vérifiez que la formule obtenue est bien correcte (on oublie pas les assert, si vous les avez vus en cours, mais faites le en dernier  **si vous avez le temps seulement** ).

### Etape 2 – Traitement de l’expression

On vous demande ensuite d’être capable d’évaluer numériquement une expression arbitraire. Afin de simplifier l’implémentation du parcours de la structure arborescente des expressions, nous allons nous baser sur le principe du Visiteur.

* Écrivez l’interface de la classe visitor qui va bien.
* Modifier le code des éléments des expressions nécessaires à l’interaction avec la classe visitor : implémentez une classe abstraite visiteur qui sera implémentée par vos visiteurs concrets (visiteur d'affichage et d'évaluation).
* Implémenter un premier visiteur display afin de remplacer la fonction d’affichage des expressions développés précédemment.
* Implémenter un visiteur eval afin d’évaluer la valeur numérique des expressions développés précédemment. Pour ce faire, il vous faudra trouver un moyen pour transmettre au visiteur la valeur numérique associée à chaque variable. Vous utiliserez pour cela le type standard std::map.
* Tester votre code sur des expressions de complexités croissantes construites manuellement (et oubliez pô mes assert siouplé, mais faites le en dernier  **si vous avez le temps seulement** ).

### Etape 3 – Construction à partir d’une chaîne

La dernière étape va consister à utiliser un schéma de Factory pour construite une expression à partir d'une chaine de caractère. En se limitant à des variables dont le nom contient 1 seule lettre et des constantes comprises entre 0 et 9 (et donc représentables sur un seul caractère), proposer une fonction permettant de transformer une chaine en l'arbre la représentant. Pour ce faire, il est conseillé de mettre en place un système récursif qui va consommer la chaine en créant les éléments nécessaires au fur et à mesure que les caractères sont lus (on a choisi l'écriture polonaise inversée justement pour vous faciliter la vie !).

Vous vérifierez que votre génération d’expression continue de fonctionner avec vos visiteurs (asserts toussa toussa,  *- thx, la direction* , mais faites le en dernier  **si vous avez le temps seulement** )


## comment utiliser notre projet 

Pour comiler le projet il faut utiliser les commandes :

```
cmake .
make 
```

Pour le lancer utilser la commande 

`./main `

Pour lancer la séquance de test  entrer "test" , sinon entrer une expression polonaise pour que le projet affiche l'opération en expréssion mathématique habituelle.

L'étape 2 n'ayant pas été complétement inmplémenter vous pouvez accéder au code liée via avec la commande

`git checkout visitor`
