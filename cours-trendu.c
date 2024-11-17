#include <stdio.h>
#include <stdlib.h>

int main() {
    int t[50];
    int max, min, i, n, choix;
    int x, del;
    printf("                                                      Compte trendu\n");

    do {
        printf("Donner le nombre des cases du tableau : ");
        scanf("%d", &n);
    } while (n > 50 || n <= 0);

    for (i = 0; i < n; i++) {
        printf("Donner le %d element du tableau: ", i);
        scanf("%d", &t[i]);
    }

    while (1) {
        system("cls");

        printf("Taper votre choix:\n");
        printf("1: Affichage du tableau\n");
        printf("2: Rechercher l'element minimum\n");
        printf("3: Afficher l'element maximum\n");
        printf("4: Rechercher un element\n");
        printf("5: Supprimer un element\n");
        printf("0: Quitter le programme\n");
        printf("Entrer votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:


                printf("Le tableau est :\n");
                for (i = 0; i < n; i++) {
                    printf("%d\n ", t[i]);
                }
                printf("\n");
                printf("Taper ENTRER pour retourner");
                getchar();
                getchar();
                break;

            case 2:

                system("cls");
                min = 0;
                for (i = 1; i < n; i++) {
                    if (t[i] < t[min]) {
                        min = i;
                    }
                }
                printf("L'element minimum du tableau est %d\n", t[min]);
                printf("Taper ENTRER pour retourner");
                getchar();
                getchar();
                break;

            case 3:

                system("cls");
                max = 0;
                for (i = 1; i < n; i++) {
                    if (t[i] > t[max]) {
                        max = i;
                    }
                }
                printf("L'element maximum du tableau est %d\n", t[max]);
                printf("Taper ENTRER pour retourner");
                getchar();
                getchar();
                break;

            case 4:

                system("cls");
                printf("Donner l'element a rechercher: ");
                scanf("%d", &x);
                int found = -1;
                for (i = 0; i < n; i++) {
                    if (t[i] == x) {
                        found = i;
                        break;
                    }
                }
                if (found != -1) {
                    printf("L'element %d existe dans le tableau a la position %d.\n", x, found);
                } else {
                    printf("L'element %d n'existe pas dans le tableau.\n", x);
                }
                printf("Taper ENTRER pour retourner");
                getchar();
                getchar();
                break;


            case 5:
                system("cls");
                printf("Donner la position de l'element a supprimer (0 a %d): ", n - 1);
                scanf("%d", &del);
                if (del < 0 || del >= n) {
                    printf("Position invalide.\n");
                } else {
                    for (i = del; i < n - 1; i++) {
                        t[i] = t[i + 1];
                    }
                    n--;
                    printf("L'element a ete supprime. Le tableau devient:\n");
                    for (i = 0; i < n; i++) {
                        printf("%d ", t[i]);
                    }
                    printf("\n");
                }
                printf("Taper ENTRER pour retourner");
                getchar();
                getchar();
                break;

            case 0:
                system("cls");
                printf("Quitter le programme.\n");
                return 0;

            default:
                printf("Choix invalide. Veuillez reessayer.\n");
                getchar();
                getchar();
        }
    }
}
