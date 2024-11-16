#include<stdio.h>
int main (){
    int t[50];
    int max,min,i,n,choix;
    int a = -1;
    int x;//x est l element a rechercher
    int del;
    printf("                                                      Compte trendu\n");
    do{
        printf("Donner le nombre des dimensions du tableau:");
        scanf("%d",&n);
    }while(n > 50);
    for (i = 0 ; i<n ; i++){
        printf("Donner le %d element du tableau:",i);
        scanf("%d",&t[i]);
    }



    while(1){
            printf("Taper votre choix:\n");
            printf("1:Affichage du tableau:\n");
            printf("2:rechercher l element minimun:\n");
            printf("3:Afficher l element maximum:\n");
            printf("4:rechercher un element:\n");
            printf("5:Supprimer un element:\n");
            printf("0:Quitter le programme:\n");
            printf("Entrer votre choix:\n");
            scanf("%d",&choix);


    switch(choix){
    case 1:

        printf("Le tableau est :\n");
        for (i = 0 ; i<n ; i++){
                printf(" %d\n", t[i]);
        }
        break;

    case 2:
        min = 0;
        for (i = 1 ; i<n ; i++){
            if (t[i]<t[min]){
                min = i;
            }
        }
        printf("L element minimum du tableau est %d\n",t[min]);
        break;

    case 3:
        max = 0;
        for (i = 1 ; i<n ; i++){
            if (t[i] > t[max]){
                max = i;
            }
        }
        printf("L element maximum du tableau est %d \n",t[max]);
        break;

    case 4:


        printf ("Donner l element a rechercher:");
        scanf("%d",&x);
        i = 0;
        for (i = 0; i < n; i++) {
            if (t[i] == x) {
                a = i;
                break;
            }
        }
        if (a != -1){
            printf("L element a recherche %d existe dand le tableau dont la position est %d",x,i);

        }
        else {
                    printf("L'element %d n'existe pas dans le tableau.\n", x);
                }
                break;



     case 5:

         do{
            printf("Donner l element a supprimer:");
            scanf("%d",&del);
         }while(del < n);



    case 0:
        printf("Quitter le programme.\n");
        return 0;
    default:
        printf("Choix invalide. Taper votre choix:\n");





}
  }
}



}
return 0;
}
