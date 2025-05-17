#include <stdio.h>   // Inclusion de la bibliothèque standard d'entrée/sortie
#include <stdlib.h>  // Inclusion de la bibliothèque standard (pas indispensable ici, mais souvent utile)

// Déclaration des fonctions utilisées
void afficher_menu();
void effectuer_calcul();

// Fonction principale : point d'entrée du programme
int main() {
    int choix;  // Variable pour stocker le choix de l'utilisateur
    printf("\n");
    printf("=== CALCULATRICE===\n");  // Message d'accueil

    // Boucle principale du programme
    do {
        afficher_menu();  // Affiche le menu des options
        printf("\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);  // Lit le choix de l'utilisateur

        // Traitement du choix de l'utilisateur
        switch (choix) {
            case 1:
                effectuer_calcul();  // Appelle la fonction de calcul
                break;
            case 0:
                printf("\n");
                printf("Merci d'avoir utilisé la calculatrice.\n");  // Message de sortie
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");  // Gestion d'une entrée invalide
        }

        printf("\n");  // Saute une ligne pour la lisibilité

    } while (choix != 0);  // Répète tant que l'utilisateur ne choisit pas de quitter

    return 0;  // Fin du programme
}

// Fonction qui affiche le menu des options
void afficher_menu() {
    printf("\n--- MENU ---\n");
    printf("\n");
    printf("1. Effectuer un calcul\n");
    printf("0. Quitter\n");
}

// Fonction qui effectue un calcul demandé par l'utilisateur
void effectuer_calcul() {
    double a, b, resultat;   // Déclaration des deux opérandes et du résultat
    char operateur;          // Variable pour stocker l'opérateur (+, -, *, /, %)

    // Demande à l'utilisateur de saisir une expression
     printf("\n");
    printf("Saisissez le calcul a effectuer : ");
    scanf("%lf %c %lf", &a, &operateur, &b);  // Lit un nombre, un caractère, puis un autre nombre

    printf("\n--- Étapes du calcul ---\n");
    printf("\n");
    // Effectue le calcul en fonction de l'opérateur
    switch (operateur) {
        case '+':
            printf("Étape : on additionne %.2lf + %.2lf\n", a, b);
            resultat = a + b;
            break;
        case '-':
            printf("Étape : on soustrait %.2lf - %.2lf\n", a, b);
            resultat = a - b;
            break;
        case '*':
            printf("Étape : on multiplie %.2lf * %.2lf\n", a, b);
            resultat = a * b;
            break;
        case '/':
            // Vérifie si division par zéro
            if (b == 0) {
                printf("Erreur : division par zéro interdite.\n");
                return;  // Quitte la fonction
            }
            printf("Étape : on divise %.2lf / %.2lf\n", a, b);
            resultat = a / b;
            break;
        case '%':
            // Vérifie si b est nul pour le modulo
            if ((int)b == 0) {
                printf("Erreur : division entière par zéro interdite.\n");
                return;
            }
            printf("Étape : on calcule le modulo %d %% %d\n", (int)a, (int)b);
            resultat = (int)a % (int)b;  // Modulo utilise des entiers
            break;
        default:
            // Cas où l'opérateur est inconnu
            printf("Erreur : opérateur inconnu '%c'\n", operateur);
            return;
    }

    // Affiche le résultat final
     printf("\n");
    printf("Résultat final : %.2lf\n", resultat);
}
