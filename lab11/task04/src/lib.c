#include "lib.h"

void fillMass(int** mass){	//* функція для заповнення динамічного двомірного масиву
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			*(*(mass + i) + j) = 10 + rand() % 99;
		}
	}	
}

void fillGenDiag(int** mass, int* a){	//* функція для знаходження головної діагоналі динамічного двомірного масиву та створення для нього  динамічного одномірного масиву
for (int i = 0; i < N; i++){
	*(a + i) = *(*(mass + i) + i);
}
}
void ReplaceMass(int* a){	//* функція для сортування динамічного одномірного масиву за зростанням
int temp;
for (int i = 0; i < N; i++){
	for (int j = i + 1; j < N; i++){
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
}
