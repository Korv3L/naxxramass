#include <stdlib.h>
#include <time.h>
int get_sum_for(int n);
int get_dig_for(int n);
int get_dig_while(int n);
int get_sum_while(int n);
int get_sum_do(int n);
int get_dig_do(int n);

int main(){
	int n = 100000 + rand() % 999999;
	
	int result_for = get_sum_for(n);
	int dig_for = get_dig_for(n);
	int result_while = get_sum_while(n);
	int dig_while = get_dig_while(n);
	int result_do = get_sum_do(n);
	int dig_do = get_dig_do(n);
	
	return 0;
	}

int get_sum_for(int n){
int summ = 0;	//* создаем переменную суммы
   	int n6, n5, n4, n3, n2, n1;	//* создаем переменные цифр числа
   	int nodn;	//* создадим переменную разрядов
   	for (int m = 0; m != n6 + n5 + n4 + n3 + n2 + n1;){	//* создаем цикл for для подсчета суммы
   		for( int digits = 0; digits != nodn;){	//* создаем цикл для расчета количества разрядов
   			for (n6 = 0; n6 != n % 10; digits++){	//* расчет последней цифры числа
   			n6 = n % 10;
   			}
   			for (n5 = 0; n5 != n / 10 % 10; digits++){	//* расчет пятой цифры числа
   			n5 = n / 10 % 10;	
   			}
   			for (n4 = 0; n4 != n / 100 % 10; digits++){	//* расчет  четвертой числа
   			n4 = n / 100 % 10;
   			}
   			for (n3 = 0; n3 != n / 1000 % 10; digits++){	//* расчет третьей цифры числа
   			n3 = n / 1000 % 10;
  			}
   			for (n2 = 0; n2 != n / 10000 % 10; digits++){	//* расчет второй цифры числа
   			n2 = n / 10000 % 10;
   			}
   			for (n1 = 0; n1 != n / 100000; digits++){	//* расчет первой цифры числа
   			n1 = n / 100000;
   			}
   		nodn = digits;	//* сравниваем локальную переменную разрядов числа в цикле к переменной количества разрядов  
   		}
   	m = n6 + n5 + n4 + n3 + n2 + n1;	//* сумма цифр числа для окончания цикла
   	summ = m;	//* сравниваем переменную суммы до цикла к перменной суммы в цикле
   	return summ;
}
}
int get_sum_while(int n){
	int nodn_w;	//* создадим переменную разрядов
	int n1_w , n2_w , n3_w , n4_w , n5_w, n6_w;	//* создадим переменные цифр
	while ( summ_w != n1_w + n2_w + n3_w + n4_w + n5_w + n6_w){	//*создаем цикл while для расчета суммы
	
	int digits_w;	//* цикличная переменная разрядов
		while ( nodn_w != digits_w){	//* цикл while для расчета разрядов
			nodn_w = digits_w;	//* формула для сравнения цикличной переменной разрядов с не цикличной переменной разрядов
			while ( n1_w != n / 100000){	//* цикл для расчета первой цифры и разряда
			n1_w = n / 100000;
			digits_w++;
			}
			while ( n2_w != n / 10000 % 10){	//* цикл для расчета второй цифры и разряда
			n2_w = n / 10000 % 10;
			digits_w++;
			}
			while ( n3_w != n / 1000 % 10){	//* цикл для расчета третьей цифры и разряда
			n3_w = n / 1000 % 10;
			digits_w++;
			}
			while ( n4_w != n / 100 % 10){	//* цикл для расчета четвертой цифры и разряда
			n4_w = n / 100 % 10;
			digits_w++;
			}
			while ( n5_w != n / 10 % 10){	//* цикл для расчета пятой цифры и разряда
			n5_w = n / 10 % 10;
			digits_w++;
			}
			while ( n6_w != n % 10){	//* цикл для расчета последней цифры и разряда
			n6_w = n % 10;
			digits_w++;
			}
			int summ_w = n1_w + n2_w + n3_w + n4_w + n5_w + n6_w;	//* формула расчета суммы
			return summ_w;
		}
}
}
int get_sum_do(int n){
int summ_d;	//* создаем переменную суммы
	int nodn_d;	//* создадим переменную разрядов
	int n1_d , n2_d , n3_d , n4_d , n5_d, n6_d;	//* создадим переменные цифр
	int digits_d;	//* создадим переменную разрядов	
	do{	//* создаем цикл do_while для подсчета суммы
		do{	//* создаем цикл do_while для подсчета количества разрядов
			do{	//* цикл для расчета первой цифры и разряда
			n1_d = n / 100000;
			digits_d++;
			}while ( n1_d != n / 100000);
			do{	//* цикл для расчета второй цифры и разряда
			n2_d = n / 10000 % 10;
			digits_d++;
			}while ( n2_d != n / 10000 % 10);
			do{	//* цикл для расчета третьей цифры и разряда
			n3_d = n / 1000 % 10;
			digits_d++;
			}while ( n3_d != n / 1000 % 10);
			do{	//* цикл для расчета четвертой цифры и разряда
			n4_d = n / 100 % 10;
			digits_d++;
			}while ( n4_d != n / 100 % 10);
			do{	//* цикл для расчета пятой цифры и разряда
			n5_d = n / 10 % 10;
			digits_d++;
			}while ( n5_d != n / 10 % 10);
			do{	//* цикл для расчета шестой цифры и разряда
			n6_d = n % 10;
			digits_d++;
			}while ( n6_d != n % 10);
			
		nodn_d = digits_d;	//* сравниваем локальную переменную разрядов числа в цикле к переменной количества разрядов 
		}while ( nodn_d != digits_d);
	summ_d = n1_d + n2_d + n3_d + n4_d + n5_d + n6_d;	//*создаем цикл while для расчета суммы
	}while ( summ_d != n1_d + n2_d + n3_d + n4_d + n5_d + n6_d);	//* конец функции do_while
	return summ_d;
}

int get_dig_for(int n){
   	int n6, n5, n4, n3, n2, n1;	//* создаем переменные цифр числа
   	int nodn;	//* создадим переменную разрядов
   		for( int digits = 0; digits != nodn;){	//* создаем цикл для расчета количества разрядов
   			for (n6 = 0; n6 != n % 10; digits++){	//* расчет последней цифры числа
   			n6 = n % 10;
   			}
   			for (n5 = 0; n5 != n / 10 % 10; digits++){	//* расчет пятой цифры числа
   			n5 = n / 10 % 10;	
   			}
   			for (n4 = 0; n4 != n / 100 % 10; digits++){	//* расчет  четвертой числа
   			n4 = n / 100 % 10;
   			}
   			for (n3 = 0; n3 != n / 1000 % 10; digits++){	//* расчет третьей цифры числа
   			n3 = n / 1000 % 10;
  			}
   			for (n2 = 0; n2 != n / 10000 % 10; digits++){	//* расчет второй цифры числа
   			n2 = n / 10000 % 10;
   			}
   			for (n1 = 0; n1 != n / 100000; digits++){	//* расчет первой цифры числа
   			n1 = n / 100000;
   			}
   		nodn = digits;	//* сравниваем локальную переменную разрядов числа в цикле к переменной количества разрядов  
   		return nodn;
   		}
}

int get_dig_while(int n){
	int nodn_w;	//* создадим переменную разрядов
	int n1_w , n2_w , n3_w , n4_w , n5_w, n6_w;	//* создадим переменные цифр
	
	int digits_w = 0;	//* цикличная переменная разрядов
		while ( nodn_w != digits_w){	//* цикл while для расчета разрядов
			
			while ( n1_w != n / 100000){	//* цикл для расчета первой цифры и разряда
			n1_w = n / 100000;
			digits_w++;
			}
			while ( n2_w != n / 10000 % 10){	//* цикл для расчета второй цифры и разряда
			n2_w = n / 10000 % 10;
			digits_w++;
			}
			while ( n3_w != n / 1000 % 10){	//* цикл для расчета третьей цифры и разряда
			n3_w = n / 1000 % 10;
			digits_w++;
			}
			while ( n4_w != n / 100 % 10){	//* цикл для расчета четвертой цифры и разряда
			n4_w = n / 100 % 10;
			digits_w++;
			}
			while ( n5_w != n / 10 % 10){	//* цикл для расчета пятой цифры и разряда
			n5_w = n / 10 % 10;
			digits_w++;
			}
			while ( n6_w != n % 10){	//* цикл для расчета последней цифры и разряда
			n6_w = n % 10;
			digits_w++;
			}
			nodn_w = digits_w;	//* формула для сравнения цикличной переменной разрядов с не цикличной переменной разрядов
			return nodn_w;
		}
}


int get_dig_do(int n){
	int nodn_d;	//* создадим переменную разрядов
	int n1_d , n2_d , n3_d , n4_d , n5_d, n6_d;	//* создадим переменные цифр
	int digits_d = 0;	//* создадим переменную разрядов	
		do{	//* создаем цикл do_while для подсчета количества разрядов
			do{	//* цикл для расчета первой цифры и разряда
			n1_d = n / 100000;
			digits_d++;
			}while ( n1_d != n / 100000);
			do{	//* цикл для расчета второй цифры и разряда
			n2_d = n / 10000 % 10;
			digits_d++;
			}while ( n2_d != n / 10000 % 10);
			do{	//* цикл для расчета третьей цифры и разряда
			n3_d = n / 1000 % 10;
			digits_d++;
			}while ( n3_d != n / 1000 % 10);
			do{	//* цикл для расчета четвертой цифры и разряда
			n4_d = n / 100 % 10;
			digits_d++;
			}while ( n4_d != n / 100 % 10);
			do{	//* цикл для расчета пятой цифры и разряда
			n5_d = n / 10 % 10;
			digits_d++;
			}while ( n5_d != n / 10 % 10);
			do{	//* цикл для расчета шестой цифры и разряда
			n6_d = n % 10;
			digits_d++;
			}while ( n6_d != n % 10);
			
		nodn_d = digits_d;	//* сравниваем локальную переменную разрядов числа в цикле к переменной количества разрядов 
		}while ( nodn_d != digits_d); 
	return nodn_d;
	}