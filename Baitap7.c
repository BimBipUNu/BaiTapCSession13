/*Xây dựng hàm tạo ma trận 2 chiều có 2 tham số là số hàng và số cột, khi gọi hàm người dùng sẽ phải nhập vào từng giá trị trong ma trận.
Hàm có kết quả trả về là một mảng 2 chiều với số hàng và số cột giống với giá trị truyền vào.
Viết chương trình yêu cầu người dùng nhập vào số hàng và số cột và sử dụng hàm để tạo ma trận, in ma trận ra màn hình để kiểm tra kết quả.*/
#include<stdio.h>
int matrix(int m, int n)
{
    int a[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("Nhập phần tử vị trí (%d,%d): ",i,j);scanf("%d",&a[i][j]);
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int rows,columns;
    printf("Nhập số hàng của ma trận: ");scanf("%d",&rows);
    printf("Nhập số cột của ma trận: ");scanf("%d",&columns);
    matrix(rows,columns);
}