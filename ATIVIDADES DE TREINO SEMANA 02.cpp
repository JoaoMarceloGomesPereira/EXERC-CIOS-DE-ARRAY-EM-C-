#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//atividade 1 da tarefa:::
void chamar(){
	int teste[5];

	int *ptr;

	int  count = 0;

	int  count1 = 0;
	
    int i = 0;
    
    for (i= 0; i < 5; i++){
    	
    	printf("Digite o %iº valor: " ,count + 1);
    	scanf("%i",&teste[i]);
    	count ++;
	}
	
	for (i = 0; i < 5; i++){
		ptr = &teste[i];
		printf("O %iº valor é: %d \n", count1+ 1,*ptr);
		count1 ++;
	}
}
//atividade 2 da tarefa:::
void dobrar(){
	int i = 0;
	
	int  count = 0;
	
	int  count1 = 0;
	
	int dob[5];
	
	int dob1[5];
	
	int *ptr1;
	for (i= 0; i < 5; i++){
    	
    	printf("Digite o %iº valor: " ,count + 1);
    	scanf("%i",&dob[i]);
    	count ++;
	}
	for (i = 0; i < 5; i++){
		ptr1 = &dob[i];
		printf("O %iº valor é: %d \n", count1+ 1,*ptr1);
		*ptr1 = *ptr1 * 2;
		dob1[i] = *ptr1;
		count1 ++;
	}
	for (i = 0;i < 5; i++){
		printf("Aqui está o %iº valor dobrado:%i \n",i + 1, dob1[i]);
	}
	
	
}
//atividade 3 da tarefa:::
void somar_array(){
	int resultado = 0;
	
	int six[6];
	
	int i = 0;
	
	int *ptr;
		
	int  count = 0;
	
	int  count1 = 0;
	
	for (i = 0; i < 6; i++){
		printf("Digite o %iº valor: ", i + 1 );
		scanf("%i",&six[i]);
	}
	
	for (i = 0; i < 6; i++){
		ptr = &six[i];
		resultado = *ptr + resultado;		
	}
	
	printf("O valor da soma dos elementos é: %i",resultado );
}
//atividade 4 da tarefa:::
void copiar(){
	int ar[5];
	
	int ar1[5];
	
	int i = 0;
	
	int *ptr;
	
	for (i = 0; i < 5; i++){
		printf("Digite o %iº elemento do array:\n", i + 1);
		scanf("%i", &ar[i]);
		ptr = &ar[i];
		ar1[i] = *ptr;
	}
	for (i = 0; i < 5; i++) {
    printf("Os valores do array1 são: %i\n", ar[i]);
    printf("----------------------------------------\n");
    printf("Os valores do array2 são: %i\n", ar1[i]);
    printf("----------------------------------------\n");
	}
}
//atividade 5 da tarefa:::
void maior_elemento(){
	
	int seven[7];
	
	int *ptr;
	
	int i = 0;
	
	int maior = 0;
	
	for( i = 0; i < 7; i++){
		printf("Digite o %iº valor do vetor: ", i +1);
		scanf("%i", &seven[i]);
		
	}
	for( i = 0; i < 7; i++){
		ptr = &seven[i];
		if (*ptr > maior);
			maior = *ptr;
	}
	
	printf("O maior valor é: %i" , maior);
	
}
//atividade 6 da tarefa:::
void inverter(){
	int i = 0;
	
	int *ptr;
	
	int six[6];
	
	int invertido[6];
	
	for (i = 0; i < 6; i++){
		printf("Digite o %iº do array: " ,i + 1);
		scanf("%i", &six[i]);
		ptr = &six[i];
		invertido[5-i] = *ptr;
	}
	for (i = 0; i < 6; i++){
		printf("----------------------------------------\n");
		printf("Aqui está o %i valor do array1: %d \n",i + 1, six[i]);
		printf("----------------------------------------\n");
	
	}
	for (i = 0; i < 6; i++){
		printf("----------------------------------------\n");
		printf("Aqui está o %iº valor do array2:%d \n",i + 1, invertido[i]);
		printf("----------------------------------------\n");
		
	}
}
//atividade 7 da tarefa:::
void par_impar(){
	int ten[10];
	
	int i = 0;
	
	int pares = 0;
	
	int impares = 0;
	
	int *ptr;
	
	int resto = 0;
	
	for (i = 0; i < 10; i++){
		printf("Digite o %iº valor do array:", i +1);
		scanf("%i", &ten[i]);
		ptr = &ten[i];
		resto = *ptr % 2;
		if (resto == 0){
				pares++;
			}
	}
	printf("%i elementos são pares", pares);
}	
//atividade 8 da tarefa:::
void multi(){
	int pri[5];
	
	int sec[5];
	
	int tri[5];
	
	int  i = 0;
	
	int *ptr = 0;
	
	for (i = 0;i < 5; i++){
		printf("Digite o %iº valor do primeiro array: " ,i +1);
		scanf("%i", &pri[i]);
		ptr = &pri[i];
		printf("Digite o %iº valor do segundo array: ", i+ 1);
		scanf("%i", &sec[i]);
		tri[i] = *ptr * sec[i];
	}
	printf("----------------------------------------\n");
	for (i = 0;i < 5; i++){
		printf("O %iº do primeiro array é: %d \n",i + 1,  pri[i]);  	
   }
   printf("----------------------------------------\n");
   for (i = 0;i < 5; i++){
		printf("O %iº do segundo array é: %d\n",i + 1, sec[i]);  	
}
	printf("----------------------------------------\n");
   for (i = 0;i < 5; i++){
		printf("O %iº do terceiro array é: %d\n",i + 1, tri[i]);  	
}
}
//atividade 9 da tarefa:::
void ordenar(){
	int five[5];
	
	int aux = 0;
	
	int *ptr1, *ptr2;
	
	int j,i,temp;
	
	for (i = 0;i < 5; i++){
		printf("Digite o %iº valor do array: " ,i +1);
		scanf("%i", &five[i]);
	}
	for (i = 0; i < 5; i++){
		for (j = 0;j < 4; j++){
			ptr1 = &five[j];
			ptr2 = &five[j + 1];
			
			if (*ptr1 > *ptr2){
				temp = *ptr1;
				*ptr1 = *ptr2;
				*ptr2 = temp;
			}
				
				
	}
}

	for (i = 0;i < 5; i++){
		printf("%d\n", five[i]);
	}
	}
//atividade 10 da tarefa:::
void igual(){
	int teste[3];
	
	int teste1[3];
	
	int i;
	
	int count = 0;
	
	for(i = 0; i < 3; i++){
		printf("Digite o %iº valor do array 1: ", i + 1 );
		scanf("%i", &teste[i]);
	}
	for (i = 0;i < 3; i++){
		printf("Digite o %iº valor do array 2: ", i + 1 );
		scanf("%i", &teste1[i]);
	}
	
	
	for (i = 0; i < 3; i++){
		if (teste[i] == teste1[i]){
			count++;
		}
	}
	if (count == 3){
		printf("Os arrays são iguais");
	}
	else{
		printf("Os arrays não são iguais");
	}
	
}
//Opções das atividades:::
void opcao(){
	int choice;
	printf("Digite a opção desejada: \n");
	printf("Opção 1: Chamar (Imprime os elementos de um array)\n");
	printf("----------------------------------------\n");
	printf("Opção 2: Dobrar  (Dobra os elementos de um array e imprime as duas versões)\n");
	printf("----------------------------------------\n");
	printf("Opção 3: Somar Array  (Soma dos arrays)\n");
	printf("----------------------------------------\n");
	printf("Opção 4: Copiar  (Copia os elementos de um array para outro)\n");
	printf("----------------------------------------\n");
	printf("Opção 5: Maior elemento  (Indica o maior elemento de um array)\n");
	printf("----------------------------------------\n");
	printf("Opção 6: Inverter  (Imprime os elementos de um array invertido)\n");
	printf("----------------------------------------\n");
	printf("Opção 7: Par e impar  Conta os elementos pares e ímpares)\n");
	printf("----------------------------------------\n");
	printf("Opção 8: Multi  (multiplica os elementos de um array e mostra em outro)\n");
	printf("----------------------------------------\n");
	printf("Opção 9: Ordenar  Ordena um array)\n");
	printf("----------------------------------------\n");
	printf("opção 10: Igual  (Verifica se o array é igual)\n");
	scanf("%i",&choice);
	if (choice == 1){
		chamar();
	}
	if (choice == 2){
		dobrar();
	}
	if (choice == 3){
		somar_array();
	}
	if (choice == 4){
		copiar();
	}
	if (choice == 5){
		maior_elemento();
	}
	if (choice == 6){
		inverter();
	}
	if (choice == 7){
		par_impar();
	}
	if (choice == 8){
		multi();
	}
	if (choice == 9){
		ordenar();
	}
	if (choice == 10){
		igual();
	}
}
int main() {
    setlocale(LC_ALL, "Portuguese");
    opcao();
	return 0;	
}
