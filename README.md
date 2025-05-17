📝 README.md

# 🧮 Calculatrice en ligne de commande en C

Ce programme est une calculatrice simple en langage C, à exécution en ligne de commande. Il permet d'effectuer les opérations arithmétiques de base (addition, soustraction, multiplication, division, modulo) avec des explications détaillées à chaque étape.

---

## 📦 Contenu du projet

- `rush02.c` : le fichier source contenant tout le code du programme.

---

## ⚙️ Compilation

Pour compiler le programme, utilisez `gcc` :

```bash
gcc -o rush02 rush02.c
-o rush02 : indique que l'exécutable s'appellera rush02.

▶️ Exécution
Après compilation, lancez simplement le programme :

./calculatrice

🧑‍💻 Fonctionnalités

Menu interactif

Saisie d'expression du type : 3.5 + 2

Prise en charge des opérateurs :

+ Addition

- Soustraction

* Multiplication

/ Division (avec vérification division par zéro)

% Modulo (sur les entiers uniquement)

Gestion des erreurs (division par zéro, opérateur invalide)

📸 Exemple d'utilisation

=== CALCULATRICE ===

--- MENU ---
1. Effectuer un calcul
0. Quitter
Entrez votre choix : 1
Entrez l'expression (exemple : 7.5 * 2) : 7.5 * 2

--- Étapes du calcul ---

Étape : on multiplie 7.50 * 2.00

Résultat final : 15.00

🔧 Améliorations possibles

Ajout d'un historique des calculs

Prise en charge d'expressions complexes comme (3 + 2) * 4

Interface graphique (avec GTK ou ncurses)
