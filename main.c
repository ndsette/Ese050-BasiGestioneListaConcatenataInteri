#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct s_elemento {
    int valore;
    struct s_elemento *next;
};

typedef struct s_elemento elemento;



int main(int argc, char** argv) {
    
    elemento *primo = NULL;
    elemento *temp;
    
    char opzione[2];
   
    
    printf("Vuoi inserire un elemento (s/n) : ");
    scanf("%s", opzione);
    if(!(strcmp(opzione, "s"))) {
        primo = (elemento *) malloc(sizeof(elemento));
        
        
        printf("Inserisci un elemento : ");
        scanf("%d", &(primo->valore));
        
        
       temp->next = primo;
       primo = temp;
        
   
    }   
    }
    
    
     temp = primo;
    
    while(temp != NULL) {
        printf("Elemento : %d", temp->valore);
        temp = temp->next;
    }
    
    
    elemento *temp = NULL;
    
    while(primo != NULL) {
        temp = primo->next;
        free(primo);
        primo = temp;
    }
    
    return (EXIT_SUCCESS);
}