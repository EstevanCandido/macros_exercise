#include <stdio.h>
#include <stdlib.h>

/* ===================================================================== */
/* --- Macros --- */
 #define	media_pond(n1, p1, n2, p2, n3, p3)	(((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3))



/* ===================================================================== */
/* --- Protótipo das funções --- */



/* ===================================================================== */
/* --- Função Principal --- */

main ()
{
	float n1=0, p1=0, n2=0, p2=0, n3=0, p3=0, resultado=0;
	
	printf("Digite 3 notas e seus respectivos pesos: " );
	scanf("%f %f %f %f %f %f", &n1, &p1, &n2, &p2, &n3, &p3);
	
	resultado = media_pond(n1, p1, n2, p2, n3, p3);
	
	printf("%.2f\n", resultado);
	
	system("PAUSE");
	return 0;
} //end main

/* ===================================================================== */
/* --- Desenvolvimento das funções --- */

