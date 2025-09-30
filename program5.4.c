/* WAP that reads two matrices A (m x n) and B (p x q) and computes the product A 
and B. Read matrix A and matrix B in row major order respectively. Print both the 
input matrices and resultant matrix with suitable headings and output should be in 
matrix format only. Program must check the compatibility of orders of the matrices 
for multiplication. Report appropriate message in case of incompatibility.*/

#include <stdio.h>

int main() {
    int m, n, p, q;
    
    // Input order of first matrix
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &m, &n);

    // Input order of second matrix
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &p, &q);

    // Check compatibility of the matrix 
    if (n != p) 
    {
        printf("Matrix multiplication not possible! (Columns of A != Rows of B)\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    // Input elements of Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
        scanf("%d", &A[i][j]);
        }
    }

    // Input elements of Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < p; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
        scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix C with 0
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
        C[i][j] = 0;
        }
    }

    // Matrix Multiplication
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
            for (int k = 0; k < n; k++) 
            {
            C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print Matrix A
    printf("\nMatrix A:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
        printf("%4d", A[i][j]);
        }
        printf("\n");
    }

    // Print Matrix B
    printf("\nMatrix B:\n");
    for (int i = 0; i < p; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
        printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    // Print Resultant Matrix C
    printf("\nResultant Matrix (A x B):\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < q; j++) 
        {
        printf("%4d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
