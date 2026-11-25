#include <stdio.h>

#define ROWA 2
#define COLA 4
#define ROWB COLA   /* 矩陣相乘條件：A 的行數必須等於 B 的列數 (4) */
#define COLB 5
#define ROWC ROWA   /* 結果矩陣 C 的列數為 2 */
#define COLC COLB   /* 結果矩陣 C 的行數為 5 */

int main(void) {
    int i, j, k;
    int A[ROWA][COLA];
    int B[ROWB][COLB];
    int C[ROWC][COLC];

    /* 1. 輸入矩陣 A (2x4) */
    printf("請輸入矩陣 A (2x4)的元素\n");
    for (i = 0; i < ROWA; i++) {
        for (j = 0; j < COLA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    /* 2. 輸入矩陣 B (4x5) */
    printf("請輸入矩陣 B(4x5)的元素\n");
    for (i = 0; i < ROWB; i++) {
        for (j = 0; j < COLB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    /* 3. 初始化矩陣 C 為 0 */
    for (i = 0; i < ROWC; i++) {
        for (j = 0; j < COLC; j++) {
            C[i][j] = 0;
        }
    }

    /* 4. 矩陣相乘核心運算 */
    for (i = 0; i < ROWC; i++) {
        for (j = 0; j < COLC; j++) {
            for (k = 0; k < COLA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    /* 5. 輸出矩陣 C */
    printf("矩陣相乘結果 C\n");
    for (i = 0; i < ROWC; i++) {
        printf("row%d ->. ", i + 1);
        for (j = 0; j < COLC; j++) {
            if (j > 0) {
                printf(", ");
            }
            printf("%d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
