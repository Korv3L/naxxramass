int main(){	//* створюємо int main()
int N = 7;
	//* FOR
int fact_F = 1;	//* создаем переменную двойного факториала для цикла for
for ( int i = N; i >= 1;){	//* создаем цикл for
	fact_F *= i;	//* формула для обчислення подвійного факторіала
	i = i - 2;
	}	//* конец цикла for
	
	//* WHILE
int fact_W = 1;	//* создаем переменную двойного факториала для цикла while
int i_w = N;
while(int i_w >= 1){	//* создаем цикл while
	fact_W *= i_w; 	//* формула для обчислення подвійного факторіала
	i_w = i_w - 2;
}	//* конец цикла while

	//* DO_WHILE
int fact_D;
int i_d = N;
do{	//* do_while
	fact_D *= i_d;	//* формула для обчислення подвійного факторіала 
	i_d = i_d - 2;
	}while(int i_d >= 1);
}	//* кінець int main()
