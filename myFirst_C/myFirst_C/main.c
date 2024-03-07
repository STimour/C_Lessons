//
//  main.c
//  myFirst_C
//
//  Created by Tim on 07/03/2024.
//
/*
Ci-dessous, ce sont des directives de préprocesseur.
Ces lignes permettent d'ajouter des fichiers au projet,
fichiers que l'on appelle bibliothèques.
Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes pour afficher
par exemple un message à l'écran.
*/

#include <stdio.h>
#include <stdlib.h>

/*
Ci-dessous, ce sont des directives de préprocesseur.
Ces lignes permettent d'ajouter des fichiers au projet,
fichiers que l'on appelle bibliothèques.
Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes pour afficher
par exemple un message à l'écran.
*/

#include <stdio.h>
#include <stdlib.h>

/*
Ci-dessous, vous avez la fonction principale du programme, appelée main.
C'est par cette fonction que tous les programmes commencent.
Ici, ma fonction se contente d'afficher la question de Larmina .
*/

int main(int argc, const char * argv[]) {
    int nombreDeVies, niveau, ageDeJoueur;
    char SEC_PERSONNAGE[] = "Larmina";
    char FIR_PERSONNAGE[] = "Huber";
    const int N_IMMATRICULE = 117;
    nombreDeVies = 5;
    int age = 0;
    char prenom[250];
    
    printf("Entrez votre âge : ");
    scanf("%d", &age);
    
    printf("Entrez votre prénom : ");
    scanf("%s", prenom);
    printf("%s: Comment est votre blanquette? \n", SEC_PERSONNAGE);
    printf("%d : Elle est bonne \n", N_IMMATRICULE);
    nombreDeVies = 4;
    printf("%s a perdu 1 point de vie, il lui reste %d point de vie \n", FIR_PERSONNAGE, nombreDeVies);
    printf("%s: On me dit le plus grand bien des harengs pomme-à-l’huile \n", SEC_PERSONNAGE);
    
    /*
     OSS 117 : Le patron vous en apportera un ramequin, vous vous ferez une idée.
     */
    return 0;
}
