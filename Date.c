#include "Date.h"

void getDate(dayDate, mounthDate, yearDate){

    printf("Dia:%d\n", dayDate);
  
    if( ((dayDate > 0) && (dayDate <= 31)) ){

        printf("Mes:%d\n", mounthDate);

        if( ( mounthDate > 0) && ( mounthDate <= 12) ){

            printf("Ano:%d\n", yearDate);

            if( ( yearDate >= 1000 ) && ( yearDate <= 9999)){

                sprintf(Date.date, "Data: %d/%d/%d", dayDate, mounthDate, yearDate);
                printf("%s", Date.date);

            };
        };
        
    };

};