/**
 * Author:  TripleZ<me@triplez.cn>
 * Date:    2018-08-16
 */

#include <immintrin.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {

    // Single-precision    
    __m256 float_vec = _mm256_set1_ps(1.0);

    float* flo = (float*) &float_vec;
    printf("float:\t\t%f, %f, %f, %f, %f, %f, %f, %f\n", flo[0], flo[1], flo[2], flo[3], flo[4], flo[5], flo[6], flo[7]);

    // Double-precision
    __m256d double_vec = _mm256_set1_pd(2.0);

    double* dou = (double*) &double_vec;
    printf("double:\t\t%lf, %lf, %lf, %lf\n", dou[0], dou[1], dou[2], dou[3]);

    // 32-bit integer
    __m256i int_vec = _mm256_set1_epi32(3);

    int* i = (int*) &int_vec;
    printf("int:\t\t%d, %d, %d, %d, %d, %d, %d, %d\n", i[0], i[1], i[2], i[3], i[4], i[5], i[6], i[7]);

    // 64-bit integer
    __m256i long_vec = _mm256_set1_epi64x(4);

    long long* lo = (long long*) &long_vec;
    printf("long long:\t%lld, %lld, %lld, %lld\n", lo[0], lo[1], lo[2], lo[3]);

    // 16-bit integer
    __m256i short_vec = _mm256_set1_epi16(5);

    short* sho = (short*) &short_vec;
    printf("short:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", sho[0], sho[1], sho[2], sho[3], sho[4], sho[5], sho[6], sho[7], sho[8], sho[9], sho[10], sho[11], sho[12], sho[13], sho[14], sho[15]);

    // 8-bit integer
    __m256i char_vec = _mm256_set1_epi8(6);

    char* c = (char*) &char_vec;
    printf("char:\t\t%d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11], c[12], c[13], c[14], c[15], c[16], c[17], c[18], c[19], c[20], c[21], c[22], c[23], c[24], c[25], c[26], c[27], c[28], c[29], c[30], c[31]);

    return 0;
}
