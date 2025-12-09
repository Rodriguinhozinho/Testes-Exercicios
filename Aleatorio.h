
/* ------------------------------------------------------- */
/* ---- protótipos/headers das funções da biblioteca ----- */
/* ------------------------------------------------------- */

// Minimal random number generator of Park and Miller.
// Returns a uniform random deviate between 0.0 and 1.0.
// Set or reset idum to any integer value (except the
// unlikely value MASK) to initialize the sequence;
// idum must not be altered between calls for
// successive deviates in a sequence
float ran0(long *);

// gera aleatoriamente um número inteiro
//  entre dois números inteiros dados
int gerarNumeroInteiro(int, int);

// gera aleatoriamente um número real
//   entre dois números reais dados
float gerarNumeroReal (float, float);


