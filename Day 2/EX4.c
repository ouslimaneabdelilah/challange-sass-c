#include <stdio.h>
int main(){
    int note;
    while (1)
    {
        printf("Entrez une note numerique :");
        scanf("%d",&note);
        if(note>=0 && note<=100) break;
        printf("Errour : S'il vous plait saisir la note entre 0 et 100!!!\n");
    }
    switch (note/10)
    {
    case 10:
    case 9:
        printf("Note litterale : A");
        break;
    case 8:
        printf("Note litterale : B");
        break;
    case 7:
        printf("Note litterale : C");
        break;
    case 6:
        printf("Note litterale : D");
        break;
    default:
        printf("Note litterale : F");
        break;
    }
    return 0;
    
}