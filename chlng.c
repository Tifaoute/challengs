/*
#include <stdio.h>
#include <stdlib.h>

int main()
{ int longeur, largeur, Aire, perimetre;
     printf("La longuer est : ");
     scanf("%d",&longeur);
     printf("la largeur est :");
     scanf("%d",&largeur);

     Aire = longeur * largeur;
     printf("Formule de l'Aire est : %d \n",Aire);

     perimetre = 2 * (longeur + largeur);
     printf("Formule de périmètre est : %d",perimetre);
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{ int age;
    printf("Entrer votre age :");
    scanf("%d",&age);
  if(age>=18){
    printf("vous etes eligible pour voter");
  }
  else{
    printf("vous etes pas eligible pour votet");
  }
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Entrer un nombre entier :");
    scanf("%d",&n);
    do{
        if(n % 2==0){
         printf("ce n'est pas un nombre premier");
        }
        else {
         printf(" c'est un nombre premier");
        }
      }
      while (n % n-1==0);

      return 0;
    }
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{ int n;
    printf("Entrer un nombre entier :");
    scanf("%d",&n);
    do{
        if(n % 2 == 0){
            printf("c'est un nombre paire");
         }
        else{
            printf("c'est un nombre impair");
         }
    }
    while(n % n-1 == 0);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{  int m,n;
   int somme = 0;
       printf("entrer la taille de tableau :");
       scanf("%d",&n);

    int tab[n];
       printf("Entrez les éléments de tableau :\n", n);

    for(int i =0; i<n; i++){
      printf("Élément %d : ", i + 1);
        scanf("%d", &tab[i]);
        somme+=tab[i];
      }
     printf("la somme est :%d \n",somme);
    return 0;
}
