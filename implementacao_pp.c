#include <stdio.h>

#include <xmmintrin.h> // SSE (Required to use the __m128, and __m128d type)
#include <emmintrin.h> // SSE2 (Required to use the __m128i type)
#include <pmmintrin.h> // SSE3
#include <smmintrin.h> // SSE4.1


#define VECTOR_SIZE         4
#define l 4
#define c 6

typedef float v4sf __attribute__ ((vector_size(sizeof(float)*VECTOR_SIZE))); 

typedef union f4vector
{
    v4sf    v;
    float   f[VECTOR_SIZE];
} f4vector;

void funcao(int y, int w, int x){
	return y * w + x;
}

void escalaCinza(float* imagem, float* cinza, int tam) {
	__m128 vetor = _mm_load_ps(cinza);

	for(i = 0; i < tam; i+4) {
		__m128 vetorImagem = _mm_load_ps(imagem);
		__m128 x = _mm_add_ps(vimg, vetor);
		_mm_store_ps(imagem, x);
		img += 4;
	}
}

int main() {
	int i, j, aux;
	float *vetorImagem __attribute__ ((aligned(16))) = (float*)malloc (sizeof(float) * 4);
	float *cinza __attribute__ ((aligned(16))) = (float*)malloc (sizeof(float) * 4);
	float imagem[l][c];

	for(i = 0; i < l; i++) {
		for(j = 0; j < c; j++) {
			img[i][j] = i+j;
		}
	}

	for(i = 0; i < l; i++) {
		for(j = 0; j < c; j++) {
			escalaCinza(vetorImagem,cinza,	funcao(l, j, c);		
		}
	}


	
}
