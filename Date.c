#include "Date.h"

void getDate(dayDate, mounthDate, yearDate){

    printf("Dia:%d\n", dayDate);
  
    if( ((dayDate > 0) && (dayDate <= 31)) ){

        printf("Mes:%d\n", mounthDate);

        if( ( mounthDate > 0) && ( mounthDate <= 12) ){

            printf("Ano:%d\n", yearDate);

            if( ( yearDate >= 1000 ) && ( yearDate <= 9999)){

                sprintf(dateFormated, "Data: %d/%d/%d", dayDate, mounthDate, yearDate);
                printf("%s", dateFormated);

                /*Basicamente, nessa função eu pego os valores passados por referência, 
                faço os if comparando se os números passados por parâmetro, estão de acordo com
                a realidade. Caso estejam, ele converte os tipos de dados pra string, com 
                formato de data.

                Infelizmente não conseguirei fazer o resto, pois não dará tempo
                */

            };
        };
        
    };

};