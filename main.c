#include <stdio.h>

int main(void){

	int segredo = rand();
	int palpite;
	int tentativa = 1;
	
	while (1){
	
	palpite = 100000001;

	while (1){
		
		if (palpite < -100000000 || palpite > 100000000  ) {
			printf ("Digite um Numero de 0 a 100: ");
			scanf ("%d", &palpite);
		} else
			break;
	}
	
	if (palpite == segredo){
		printf ("Parabens voce acertou em %d tentativa\n", tentativa);
			break;
	} else  if(palpite < segredo){
		printf("seu numero é menor que o segredo!\n");
	} else 
		printf("seu numero é maior que o segredo!\n");

	tentativa = tentativa +1;

}

return 0;

}





	
	












	
