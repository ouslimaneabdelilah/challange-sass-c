#include <stdio.h>
int main(){
    int j1,m1,y1,j2,m2,y2;
    while (1)
    {
        printf("Entrez la première date (mm/jj/aa) :");
        scanf("%d / %d / %d",&m1,&j1,&y1);
        if (j1<=31 && m1<=12) break;
        printf("S'il vous plait la valeur de mois ou jour n'est pas valide\n");
        
    }
    while (1)
    {
        printf("Entrez la deuxieme date (mm/jj/aa) :");
        scanf("%d / %d / %d",&m2,&j2,&y2);
        if (j2<=31 &&  m2<=12) break;
        printf("S'il vous plait la valeur de mois ou jour n'est pas valide\n");
        
    }
    
    if (y1>y2)
    {
        printf("%d / %d / %d  est plus tôt que %d / %d / %d",m2,j2,y2,m1,j1,y1);
        
    }else if(y1<y2){
        printf("%d / %d / %d  est plus tôt que %d / %d / %d",m1,j1,y1,m2,j2,y2);
    }else{
        if(m1>m2){
            printf("%d / %d / %d  est plus tôt que %d / %d / %d",m2,j2,y2,m1,j1,y1);
        }else if (m1<m2)
        {
            printf("%d / %d / %d  est plus tôt que %d / %d / %d",m1,j1,y1,m2,j2,y2);
        }else{
            if (j1>j2)
            {
                printf("%d / %d / %d  est plus tôt que %d / %d / %d",m2,j2,y2,m1,j1,y1);
            }else if (j1<j2)
            {
                printf("%d / %d / %d  est plus tôt que %d / %d / %d",m1,j1,y1,m2,j2,y2);

            }
            else{
                printf("la meme date !!!!!");
            }
            
            
        }
        
    }
    return 0;
    
}