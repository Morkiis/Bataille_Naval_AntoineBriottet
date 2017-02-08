#include <stdio.h>
#include <stdlib.h>
#define TAILLE_BATEAU 3
#define TAILLE_FLOTTE 5
//BUT : Produire un code en C de la bataille navale
//ENTREE : On entre des points
//SORTIE : Le programme nous dit si on touche les points ou non

//TYPE STRUCT
typedef struct Cellule
{
    int x;
    int y;

}Cellule;



typedef struct Bateau
{
    Cellule cel[TAILLE_BATEAU];

}Bateau;



typedef struct Flotte
{
    Bateau bat[TAILLE_FLOTTE];

}Flotte;




//ENUM à utiliser pour fonction de vérification
enum BOOL{
    True,False, //True=0, False=1,
};



//PROTO
Cellule CreationCellule(int x, int y);
Bateau createBateau(Cellule cel1,Cellule cel2,Cellule cel3);
void createFlotte(Flotte *flotte);
enum BOOL VerificationCellule(Cellule cel1, Cellule cel2);



//MAIN
int main()
{
    Flotte flotte[2]; // pour 0 1 donc 2 joueurs
    int x;
    int y;



    CreationCellule(x,y);

    return 0;
}




//FONCTIONS ET PROCEDURES
Cellule CreationCellule(int x, int y)
{
    Cellule cel;
    cel.x=x;
    cel.y=y;

    return cel;
}



Bateau createBateau(Cellule cel1,Cellule cel2,Cellule cel3)
{

    Bateau bat;

    bat.cel[0] = cel1;
    bat.cel[1] = cel2;
    bat.cel[2] = cel3;


    return bat;
}



void createFlotte(Flotte *flotte)
{

    flotte[0].bat[0] = createBateau(CreationCellule(1,1),CreationCellule(1,2),CreationCellule(1,3));
    flotte[0].bat[1] = createBateau(CreationCellule(4,6),CreationCellule(4,7),CreationCellule(4,8));
    flotte[0].bat[2] = createBateau(CreationCellule(7,3),CreationCellule(8,3),CreationCellule(9,3));
    flotte[0].bat[3] = createBateau(CreationCellule(3,1),CreationCellule(3,2),CreationCellule(3,3));
    flotte[0].bat[4] = createBateau(CreationCellule(7,9),CreationCellule(8,9),CreationCellule(9,9));

    flotte[1].bat[0] = createBateau(CreationCellule(5,1),CreationCellule(6,1),CreationCellule(7,1));
    flotte[1].bat[1] = createBateau(CreationCellule(3,3),CreationCellule(4,3),CreationCellule(5,3));
    flotte[1].bat[2] = createBateau(CreationCellule(8,3),CreationCellule(8,4),CreationCellule(8,5));
    flotte[1].bat[3] = createBateau(CreationCellule(1,6),CreationCellule(1,7),CreationCellule(1,8));
    flotte[1].bat[4] = createBateau(CreationCellule(6,8),CreationCellule(7,8),CreationCellule(8,8));


}

enum BOOL VerificationCellule(Cellule cel1, Cellule cel2)
{
    if(cel1.x==cel2.x && cel1.y==cel2.y)
    {
        return True;

    }else
    {
        return False;
    }

}


enum BOOL verifBateau(Cellule celtest, Bateau *bat)
{


    if (VerificationCellule == False)
    {
        if ((celtest == bat.cel[0]) || (celtest == bat.cel[1]) || (celtest == bat.cel[2]))
        {
            return True;

        }else
        {
            return False;
        }
    }
}
