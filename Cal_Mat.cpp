#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#define MAX 50

void Menu(int &a);
void Menu2(int &a);
void Menu3(int &a);
void Menu4(int &a);
void ImpC(int *ptr_m, int &o, char l);
void ImpC(float *ptr_m, int &o, char l);
void ImpM(int *ptr_m, int &f, int &c, char l);
void LeerC(int *ptr_m, int &o, char l);
void LeerM(int *ptr_m, int &f, int &c, char l);
void Suma(int *ptr_a, int *ptr_b, int *ptr_c, int &o);
void SumaM(int *ptr_a, int *ptr_b, int*ptr_c, int &f, int &c);
void Resta(int *ptr_a, int *ptr_b, int *ptr_c,  int &o);
void RestaM(int *ptr_a, int *ptr_b, int*ptr_c, int &f, int &c);
void MulC(int *ptr_a, int *ptr_b, int *ptr_c, int &o);
void MulM(int *ptr_a, int *ptr_b, int *ptr_c, int &f, int &c, int &co);
void DivM(float *ptr_a, float *ptr_c, int &o, int &det);
void Det(int *ptr_a, int &o, int &re);
void Cof(int *ptr_a, int &o, int fil, int col, int &ret);
void Fac(int *ptr_a, int *ptr_b, int f, int c, int &fil, int col, int comp, int &ret);
void Adj(int *ptr_a, int *ptr_c, int &o);
void Trans(int *ptr_a, int *ptr_c, int &o);
void Rep(char &re);
void Ninv(char &re, int o);
void cleM(int *ptr_n);
void cleM(float *ptr_n);
void cle(int &ptr_n);
void cle(float &ptr_n);
void camb(int *ptr_a, float *ptr_b, int &o);

int main(void){
 	int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], *pA, *pB, *pC, opt, res, pord = 0, ord = 0, fil = 0, col = 0, cas = 8;
	float r, *pb, BF[MAX][MAX], *pc, CF[MAX][MAX];
	char rep;
		pA = &A[0][0];
		pB = &B[0][0];
		pC = &C[0][0];
	 	pc = &CF[0][0];
	 	pb = &BF[0][0];
	 
	 	do{   
	    	rep = ' ';
	        
		    do{  
				Menu(opt);
			        if(opt < 1 || opt > cas){
			            printf("\n*** Opcion incorrecta, intente de nuevo ***\n");
		                cle(opt);
			        }
		    }while(opt < 1 || opt > cas);
		    
		    if(opt != cas){
		        switch(opt){
			        case 1:
			                do{
		                        Menu2(opt);
		                        if(opt != 1 && opt != 2){
		                            printf("\n*** Opcion incorrecta, intente de nuevo ***\n");
		                            cle(opt);
		                        }
		                    }while(opt != 1 && opt != 2);
		                
		                    switch (opt){
		                        case 1:
			                       		printf("\n---SUMA DE MATRICES CUADRADAS----------------\n");
						                LeerC(pA, ord, 'A');
						                pord = ord; 
						                printf("\n\n***** Ingrese otra matriz de orden %d *****\n\n",pord);
						                LeerC(pB, pord, 'B');
						                Suma(pA, pB, pC, ord);
						                ImpC(pC, ord, 'C');
                            	break;
                    
		                        case 2:
		                                printf("\n---SUMA DE MATRICES MIXTAS------------------\n");
					                    LeerM(pA, fil, col, 'A');
		                                LeerM(pB, fil, col, 'B');
		                            	SumaM(pA, pB, pC, fil, col);
		                                ImpM(pC, fil, col, 'C');
		                        break;
		                	}
			                break;
			                
			        case 2:
			        		do{
		                        Menu3(opt);
		                        if(opt != 1 && opt != 2){
		                            printf("\n*** Opcion incorrecta, intente de nuevo ***\n");
		                            cle(opt);
		                        }
		                    }while(opt != 1 && opt != 2);
		                
		                    switch (opt){
		                        case 1:
			                       		printf("\n---RESTA DE MATRICES CUADRADAS---------------\n");
						                LeerC(pA, ord, 'A');
						                pord = ord; 
						                printf("\n\n***** Ingrese otra matriz de orden %d *****\n\n",pord);
						                LeerC(pB, pord, 'B');
						                Resta(pA, pB, pC, ord);
						                ImpC(pC, ord, 'C');
                            	break;
                    
		                        case 2:
		                                printf("\n---RESTA DE MATRICES MIXTAS------------------\n");
					                    LeerM(pA, fil, col, 'A');
		                                LeerM(pB, fil, col, 'B');
		                            	RestaM(pA, pB, pC, fil, col);
		                                ImpM(pC, fil, col, 'C');
		                        break;
		                	}			                
			                break;
			                
			        case 3:
		                    do{
		                        Menu4(opt);
		                        if(opt != 1 && opt != 2){
		                            printf("\n*** Opcion incorrecta, intente de nuevo ***\n");
		                            cle(opt);
		                        }
		                    }while(opt != 1 && opt != 2);
		                
		                    switch (opt){
		                        case 1:
			                       		printf("\n---MULTIPLICACION DE MATRICES CUADRADAS------\n");
			                       		LeerC(pA, ord, 'A');
			                        	pord = ord;
			                            printf("\n\n***** Ingrese otra matriz de orden %d *****\n\n",pord);
			                            LeerC(pB, pord, 'B');
			                            MulC(pA, pB, pC, ord);
			                            ImpC(pC, ord, 'C');
                            	break;
                    
		                        case 2:
		                                printf("\n---MULTIPLICACION DE MATRICES MIXTAS------\n");
					                    LeerM(pA, fil, col, 'A');
					                    pord = fil;
		                                ord = col;
		                                cle(col);
		                                LeerM(pB, ord, col, 'B');
		                            	MulM(pA, pB, pC, fil, col, ord);
		                                ImpM(pC, fil, col, 'C');
		                        break;
		                	}
		                	break;
			                
			        case 4:
			                printf("\n---DETERMINANTE---------------------------\n");
			                LeerC(pA, ord, 'A');
			                Det(pA, ord, pord);
			                printf("\nEl determinante de la Matriz A %d x %d es: %d", ord, ord, pord);
			                break;
			                
			        case 5:
			                printf("\n---MATRIZ TRANSPUESTA---------------------\n");
			                LeerC(pA, ord, 'A');
			                Trans(pA, pC, ord);  
			                ImpC(pC, ord, 'T');                 
			                break;
			          
			        case 6:
			                printf("\n---MATRIZ ADJUNTA-------------------------\n");
			                LeerC(pA, ord, 'A');
			                Adj(pA, pC, ord);  
			                ImpC(pC, ord, 'a');                 
			                break;
			                
			        case 7:
			                printf("\n---MATRIZ INVERSA-------------------------\n");
			                do{
			                	rep = ' ';			                	
			                	LeerC(pA, ord, 'A');			                	
			                	Det(pA, ord, res);
			                	if(res == 0 || ord == 1){
			                		Ninv(rep, ord);
			                		cle(ord);
								}
							}while((res == 0 && (rep == 's' || rep == 'S')) || (res != 0 && (rep == 's' || rep == 'S')));
							if(res != 0 && ord > 1){
								Trans(pA, pC, ord);
								Adj(pC, pB, ord);
								camb(pB, pb, ord);
								DivM(pb, pc, ord, res);
								ImpC(pc, ord, 'I');
							}
			                break;
		        }
			Rep(rep);
			if(rep == 's' || rep == 'S'){
			    cleM(pA);
			    cleM(pB);
			    cleM(pC);
			    cleM(pb);
			    cleM(pc);
			    cle(r);
		        cle(fil);
		        cle(col);
		 	    cle(ord);
			    cle(res);
			    cle(pord);
			    printf("\n\n");
			}
	    	}
		}while(rep == 's' || rep == 'S');
}

void Menu(int &a){
	printf("----------CALCULADORA DE MATRICES------------\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Determinante\n");
	printf("5. Transpuesta\n");
    printf("6. Adjunta\n");
	printf("7. Inversa\n");
	printf("8. Salir\n");
	printf("\nSeleccione una opcion: ");
	scanf("%d", &a);
}

void Menu2(int &a){
	printf("--------------SUMA DE MATRICES---------------\n");
	printf("1. Cuadrada\n");
	printf("2. Mixta\n");
	printf("\nSeleccione una opcion: ");
	scanf("%d", &a);
}

void Menu3(int &a){
	printf("-------------RESTA DE MATRICES---------------\n");
	printf("1. Cuadrada\n");
	printf("2. Mixta\n");
	printf("\nSeleccione una opcion: ");
	scanf("%d", &a);
}

void Menu4(int &a){
	printf("---------MULTIPLICACION DE MATRICES----------\n");
	printf("1. Cuadrada\n");
	printf("2. Mixta\n");
	printf("\nSeleccione una opcion: ");
	scanf("%d", &a);
}

void ImpC(int *ptr_m, int &o, char l){
    printf("\n---Matriz %c--------------------------------\n\n", l);
    for(int i = 0; i<o; i++){
        printf("    |");
        for(int j = 0; j<o; j++){
        printf(" %d ", *(ptr_m + j + (i*o)));
        }
        printf("|\n");
    }
}

void ImpC(float *ptr_m, int &o, char l){
    printf("\n---Matriz %c--------------------------------\n\n", l);
    for(int i = 0; i<o; i++){
        printf("    |");
        for(int j = 0; j<o; j++){
        printf(" %.4f ", *(ptr_m + j + (i*o)));
        }
        printf("|\n");
    }
}

void ImpM(int *ptr_m, int &f, int &c, char l){
    printf("\n---Matriz [%c] %d x %d -----------------------\n\n", l, f, c);
    for(int i = 0; i<f; i++){
        printf("    |");
        for(int j = 0; j<c; j++){
        printf(" %d ", *(ptr_m + j + (i*f)));
        }
        printf("|\n");
    }
}

void LeerC(int *ptr_m, int &o, char l){
    if(o == 0){
	    do{
		printf("\nIngrese el orden de la matriz [%c] (1 - %d): ", l, MAX);
	    scanf("%d", &o);
	    if(o < 1 || o > MAX){
	    	printf("\n+++RANGO EQUIVOCADO+++\n");
	    	printf("El orden de la matriz debe ser entre 1 y %d\n", MAX);
	    	printf("Intente de nuevo\n\n");
	    	cle(o);
		}
		}while(o < 1 || o > MAX);
    }
    printf("\n---MATRIZ [%c] %d x %d ----------------------\n", l, o, o);
    printf("Leyendo valores de la matriz %c: \n",l);
	 for(int i = 0; i<o; i++){
        for(int j = 0; j< o; j++){
    printf("\nIntroduce el valor de Mat_%c[%d][%d]: ",l , i, j);
	   scanf("%d",ptr_m + (j + (i*o)));
            }
	 }	
}

void LeerM(int *ptr_m, int &f, int &c, char l){
	do{
     	if(f == 0){
	   		printf("\nIngrese el numero de filas de la matriz [%c]  (1 - %d): ", l, MAX);
	    	scanf("%d", &f);
     	}
    	if(c == 0){
      		printf("\nIngrese el numero de columnas de la matriz (1 - %d): ", MAX);
	    	scanf("%d", &c);
     	}
	    if(c < 1 || c > MAX){
			printf("\n+++NUMERO DE COLUMNAS INVALIDO+++\n");
			printf("El numero de columnas de la matriz debe ser entre 1 y %d\n", MAX);
			printf("Intente de nuevo\n\n");
      		cle(c);
            }
      	if(f < 1 || f > MAX){
	    	printf("\n+++NUMERO DE FILAS INVALIDO+++\n");
	    	printf("El numero de filas de la matriz debe ser entre 1 y %d\n", MAX);
	    	printf("Intente de nuevo\n\n");
      		cle(f);
		}
	}while((c < 1 || c > MAX) || (f < 1 || f > MAX));
    
    printf("\n---MATRIZ [%c] %d x %d ----------------------\n", l, f, c);
    printf("Leyendo valores de la matriz %c: \n",l);
		for(int i = 0; i<f; i++){
       	 	for(int j = 0; j< c; j++){
   				printf("\nIntroduce el valor de Mat_%c[%d][%d]: ",l , i, j);
	   			scanf("%d",ptr_m + (j + (i*f)));
            }
		}
}

void Suma(int *ptr_a, int *ptr_b, int*ptr_c, int &o){
	for(int i = 0; i<o; i++){
        for(int j = 0; j<o; j++){
		*(ptr_c + j + (i*o)) = *(ptr_a + j + (i*o)) + *(ptr_b + j + (i*o));
        }
	}
}

void SumaM(int *ptr_a, int *ptr_b, int*ptr_c, int &f, int &c){
	for(int i = 0; i<f; i++){
        for(int j = 0; j<c; j++){
		*(ptr_c + j + (i*f)) = *(ptr_a + j + (i*f)) + *(ptr_b + j + (i*f));
        }
	}
}

void Resta(int *ptr_a, int *ptr_b, int*ptr_c, int &o){
	for(int i = 0; i<o; i++){
        for(int j = 0; j<o; j++){
		*(ptr_c + j + (i*o)) = *(ptr_a + j + (i*o)) - *(ptr_b + j + (i*o));
        }
	}
}

void RestaM(int *ptr_a, int *ptr_b, int*ptr_c, int &f, int &c){
	for(int i = 0; i<f; i++){
        for(int j = 0; j<c; j++){
		*(ptr_c + j + (i*f)) = *(ptr_a + j + (i*f)) - *(ptr_b + j + (i*f));
        }
	}
}

void MulC(int *ptr_a, int *ptr_b, int *ptr_c, int &o){
    int v = 0;
    for(int i = 0; i<o; i++){
        for(int j = 0; j<o; j++){
            Fac(ptr_a, ptr_b, i, j, o, 0, 0, v);
            *(ptr_c + j + (i*o)) = v;
        }
    }
}

void MulM(int *ptr_a, int *ptr_b, int *ptr_c, int &f, int &c, int &co){
    int v = 0;
    for(int i = 0; i<f; i++){
        for(int j = 0; j<c; j++){
            Fac(ptr_a, ptr_b, i, j, f, c, co, v);
            *(ptr_c + j + (i*f)) = v;
        }
    }
}

void DivM(float *ptr_a, float *ptr_c, int &o, int &det){
	for(int i = 0; i<o; i++){
		for(int j = 0; j<o; j++){
			*(ptr_c + j + (i*o)) = ((*(ptr_a + j + (i*o))) / det);
		}
	}
}

void camb(int *ptr_a, float *ptr_b, int &o){
	for(int i = 0; i<o; i++){
		for(int j = 0; j<o; j++){
			*(ptr_b + j + (i*o)) = *(ptr_a + j + (i*o));
		}
	}
}

void Fac(int *ptr_a, int *ptr_b, int f, int c, int &fil, int col, int comp, int &ret){
    cle(ret);
    if(col == 0 && comp == 0){
        col = fil;
        comp = fil;
    }
    for(int i = 0; i<comp; i++){
        ret += (*(ptr_a + i +(f*fil))) * (*(ptr_b + c + (i*comp)));
    }
}

void Adj(int *ptr_a, int *ptr_c, int &o){
    int det = 0;
    if(o == 1){
        *ptr_c = *ptr_a;
    } else{
        for(int i = 0; i<o; i++){
            for(int j = 0; j<o; j++){
            	cle(det);
                Cof(ptr_a, o, i, j, det);
                *(ptr_c + j + (i*o)) = det;
            }   
        }
    }
}
  
void Trans(int *ptr_a, int *ptr_c, int &o){
    for(int i = 0; i<o; i++){
        for(int j = 0; j<o; j++){
            *(ptr_c + i + (j*o)) = *(ptr_a + j + (i*o));
        }
    }
}

void Det(int *ptr_a, int &o, int &re){
    int ret = 0, c = 0;
    cle(re);
    if(o == 1){
        ret = *ptr_a;
    } else{
        for(int i = 0; i<o; i++){
        	cle(c);
        	Cof(ptr_a, o, 0, i, c);
            ret += (*(ptr_a + i)) * c;
        }
    }
    re = ret;
}

void Cof(int *ptr_a, int &o, int fil, int col, int &ret){
	cle(ret);
    int Mtem[MAX][MAX], *ptr_t, x = 0, y = 0, temp;
    int n = o - 1;
    ptr_t = &Mtem[0][0];
    for(int i = 0; i<o; i++){
        for(int j = 0; j<o; j++){
            if(j != col && i != fil){
                *(ptr_t + y + (x*n)) = *(ptr_a + j + (i*o));
                y++;
                if(y >= n){
                    y = 0;
                    x++;
                }
            }
        }
    }
    Det(ptr_t, n, temp);
    ret = pow((-1), fil + col) * temp;     
}

void Rep(char &re){
    printf("\n\n             [S] [N]\nDesea hacer otra operacion: ");
    scanf("%s", &re);
}

void Ninv(char &re, int o){
	if(o == 1){
		printf("\nLas Matrices con orden 1 no tienen inversa\n\n");
	}else{
		printf("\n*** La Matriz [A] %d x %d no tiene inversa ***\n", o, o);
	}
    printf("\n\n             [S] [N]\nDesea introducir otra matriz: ");
    scanf("%s", &re);
}

void cleM(int *ptr_n){
    for(int i = 0; i<MAX; i++){
        *(ptr_n + i) = 0;
    }
}

void cle(int &ptr_n){
    ptr_n = 0;
}

void cleM(float *ptr_n){
    for(int i = 0; i<MAX; i++){
        *(ptr_n + i) = 0;
    }
}

void cle(float &ptr_n){
    ptr_n = 0;
}
