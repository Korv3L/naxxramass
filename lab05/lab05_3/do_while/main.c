void main (){
	int N = 5;
	int A = 10000;
	int PERC = 100;
	float summary_out;
	int i = 0;
	double count;
	float at_perc_per_annum = 7 / ( float )PERC;
	do{
	
		count = count +  A * (double)at_perc_per_annum; 
		i++;
	}while ( i != N );
	summary_out = (double)A + count;
}


