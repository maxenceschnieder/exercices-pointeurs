#include <iostream>   

    int longueur(const char* chaine){
        int taille;
        if(chaine !=NULL ){
             for(taille=0; *(chaine + taille) != '\0'; taille++);   
}       else { taille=0   ;}
        return taille;//exo1
}

void copie(char *dest, const char* source){
    int t_source;
    int i;
    t_source= longueur(source);
    
    for(i=0; i< t_source + 1; i++){
        *(dest + i) = *(source + i);
    }
}//exo2

void concatene(char *dest, const char *source){
    int i;
    int t_dest= longueur(dest);
    int t_source= longueur(source);
    for(i=0; i < t_source+1; i++){
        *(dest + (t_dest + i)) = *(source + i);
    }
}

int compare(const char* chaine1, const char* chaine2){
    int l_chaine1 = longueur(chaine1);
    int l_chaine2 = longueur(chaine2);
    int i=l_chaine1 - l_chaine2;
    return i
    }

char *cherche_char(const char* chaine, char caractere) {
    char *pointeur;
    int i;
    for(i=0; *(chaine + i) != caractere && *(chaine + i) != '\0'; i++) {
    *pointeur = *(chaine + i);
    }
    return pointeur;
}

 void inverse(char *chaine){
    char fin= *chaine;
    int i=longueur(*chaine);
    int j;
    for(j=0; i != 0; j++){
        *(chaine + i)= *(fin + j);
        i--;
    }

 }

void to_upper(char *chaine){
    
    int l=longueur(chaine);
    int i;
    int j;
    const char* maj[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char* min[]="abcdefghijklmnopqrstuvwxyz";
    for (i=0; i<l  ; i++){
        for (j=0; j<26  ; j++){
            if(*(chaine+i)== *(min + j)){
                *(chaine + i) = *(maj +j);
                break;
            }
        }
    }

}

void to_lower(char *chaine){
    
    int l=longueur(chaine);
    int i;
    int j;
    const char* maj[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char* min[]="abcdefghijklmnopqrstuvwxyz";
    for (i=0; i<l  ; i++){
        for (j=0; j<26  ; j++){
            if(*(chaine+i)== *(maj + j)){
                *(chaine + i) = *(min +j);
                break;
            }
        }
    }

}

char *cherche_mot(const char *phrase, const char *mot){

    lm=longueur(mot);
    lp=longueur(phrase);
    int i;
    int conteur=0;
    for (j=0; j<lp; j++){
    
        for ( i = 0; i < lm; i++)
        {
            if (*(mot + i)==*(phrase + j))
            {
                conteur++
            }
            /* code */
        }
        
}
}
