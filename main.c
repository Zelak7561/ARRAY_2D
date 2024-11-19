#include <stdio.h>
#include <math.h>

void read_array(int, int, double [0][0]);

void show_array(int, int, double [0][0]);

void calc_average_rows(int, int, double [0][0]);

void calc_average_columns(int, int, double [0][0]);

void calc_double_elements(int, int, double [0][0]);

int main(void) {
    int rows, column;

    printf("Enter number of rows: \n");
    scanf("%d", &rows);
    printf("Enter number of columns: \n");
    scanf("%d", &column);

    double a[rows][column];

    printf("/////////////////////////////////\n");
    printf("Rows: [%d] || Colums: [%d]\n", rows, column);
    printf("/////////////////////////////////\n");

    read_array(rows, column, a);
    printf("\n");
    show_array(rows, column, a);
    printf("\n");
    calc_average_rows(rows, column, a);
     printf("\n");
    calc_average_columns(rows, column, a);
    printf("\n");
    calc_double_elements(rows, column, a);

    return 0;
}

void read_array(int rows, int columns, double a[rows][columns]) {
    double n;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Insert element {a[%d][%d]} : \n", i, j);
            scanf("%lf", &a[i][j]);
        }
    }
}

void show_array(int rows, int columns, double a[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Element[%d][%d] : {a[%lf]} \n", i, j, a[i][j]);
        }
    }
}

void calc_average_rows(int rows, int columns, double a[rows][columns]) {
    for (int i = 0; i < rows; i++) {
        double sum = 0.0;
        for (int j = 0; j < columns; j++) {
            sum += a[i][j];
        }
        double average = sum / columns;
        printf("Average of row %d: %.4lf\n", i, average);
    }
}

void calc_average_columns(int rows, int columns, double a[rows][columns]) {
    for (int j = 0; j < columns; j++) {
        double sum = 0.0;
        for (int i = 0; i < rows; i++) {
            sum += a[i][j];
        }
        double average = sum / rows;
        printf("Average of column %d: %.4lf\n", j, average);
    }
}

void calc_double_elements(int rows, int columns, double a[rows][columns]) {
    double sumT = 0.0;
    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++) {
            sumT +=  a[i][j] + a[i][j];
        }
    }
    printf("Double of all elements is: %.4lf\n",  sumT);


}