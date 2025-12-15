#include <stdio.h>
void QuantidadePosNeg(int A, int N, int *qNeg, int *qPos){
	int k;
	*qNeg = 0;
	*qPos = 0;
	for (k=0; k<N; k++){
		if(A[k]>0)
			*qPos++;
		else
			*qNeg++;
	}
}
