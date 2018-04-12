//
// Created by wpy on 2018/2/7.
//

//#include <stdio.h>
//#include <stdlib.h>
#include <immintrin.h>

int sum(const char *a, const char *b) {
    int sum = 0;
    for (int i = 0; i < 5120; ++i) {
        sum += a[i] * b[i];
    }
    return sum;
}

int sum256(const char *a, const char *b) {
    __m256i sum = {0}; //ymm2

    for (int i = 0; i < 512; i += 32) {
        __m256i za = _mm256_load_si256((const __m256i *) (a + i)); //ymm0
        __m256i za0 = _mm256_cvtepi8_epi16(_mm256_castsi256_si128(za));
        __m256i zb0 = _mm256_cvtepi8_epi16((__m128i) (b + i)); //ymm3
        zb0 = _mm256_mullo_epi16(za0,zb0);


        __m128i za1 = _mm256_cvtepi8_epi16(_mm256_extracti128_si256(za, 0x1));

        __m256i zb1 = _mm256_cvtepi8_epi16((__m128i) (b + i + 16));


        _mm256_mullo_epi16(za1,zb1);
        _mm256_add_epi32(sum,)
    }

}


int main(void) {
}
//    int t = cmovdiff(2, 3);
//    char a[512];
//    char b[512];
//
//    for (int i = 0; i < 512; i++) {
//        a[i] = (char) rand();
//        b[i] = (char) rand();
//    }
//
//    int t = sum(a, b);
//    printf("%d:\n", t);
//}

