#include <stdio.h>
int main(){
    int min,minute,heure,resulta,depart_minu,stock,index;
    int fin_heure = 23*60+59;
    int T_Depart[8][2] = {
        {8,00},
        {9,43},
        {11,19},
        {12,47},
        {2,00},
        {3,45},
        {7,00},
        {9,45},
    };
    int T_arive[8][2] = {
        {10,16},
        {11,52},
        {1,31},
        {3,00},
        {4,8},
        {5,55},
        {9,20},
        {11,58},
    };
    printf("Entres une heure (24h) : ");
    scanf("%d:%d",&heure,&minute);
    int heure_to_minute = (heure * 60) + minute;
    for (int i = 0; i < 8; i++)
    {

        depart_minu = T_Depart[i][0] * 60 + T_Depart[i][1];
        resulta = depart_minu - heure_to_minute;
        if(resulta < fin_heure){
            fin_heure= resulta;
            index = i;
        }
    }
    printf("L'heure de départ la plus proche est %d : %d arrivant a %d : %d\n",T_Depart[index][0],T_Depart[index][1],T_arive[index][0],T_arive[index][1]);
    return 0;
    
}