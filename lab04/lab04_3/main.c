int main () {	//* Создаем функцию main

int k = 28;	//* Создаем локальную переменную k  
int m = 64;	//* Создаем локальную переменную m
int n = 15;	//* Создаем локальную переменную n

int temp;	//* Создаем переменную temp для обмена значений, "локальный буфер обмена"
	if (k > m) {	//* Создаем первое условие if , если k больше m
		temp = k;	//* Сравниваем temp с k - первый объект для обмена готов
		k = m;	//* Сравниваем k и m - обмениваем их значениями, следовательно и местами
		m = temp;	//* Сравниваем temp с m - второй объект для обмена готов
	}	//* Завершение первого условия
	if (k > n) {	//* Создаем второе условие if , если k больше n
		temp = k;	//* Сравниваем temp с k - первый объект для обмена готов
		k = n;	//* Сравниваем k и n - обмениваем их значениями, следовательно и местами
		n = temp;	//* Сравниваем temp с n - второй объект для обмена готов
	}	//* Завершение второго условия
	if (m > n) {	//* Создаем третье условие if , если m больше n
		temp = m;	//* Сравниваем temp с m - первый объект для обмена готов
		m = n;	//* Сравниваем m и n - обмениваем их значениями, следовательно и местами
		n =temp;	//* Сравниваем temp с n - второй объект для обмена готов
	}	//* Завершение третьего условия
	return 0;	//* Заканчиваем текущую функцию main () и возвращаем результат программы
}
