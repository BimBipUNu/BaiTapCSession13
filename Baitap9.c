#include<stdio.h>
int a[100][100];
int choose;
int row,col;
int active =0;

int isPrime(int num);

void menu();

void addArray();

void showArray();

void cornerMatrix();

void boderMatrix();

void mainDiagonalSecondDigonal();

void isPrimeInMatrix();

int main()
{
    while(1)
    {
        menu();
        printf("Lựa chọn của bạn: \n");scanf("%d",&choose);
        if(choose == 7)
        {
            break;
        }
        if(active ==0 && choose !=1)
        {
            printf("Chưa có dữ liệu\n");
            continue;
        }
        switch(choose)
        {
            case 1:
                printf("Nhập số hàng của ma trận: ");scanf("%d",&row);
                printf("Nhập số cột của ma trận: ");scanf("%d",&col);
                addArray();
                active=1;
                break;
            case 2:
                showArray();
                break;
            case 3:
                cornerMatrix();
                break;
            case 4:
                boderMatrix();
                break;
            case 5:
                mainDiagonalSecondDigonal();
                break;
            case 6:
                isPrimeInMatrix();
                break;
        }
    }
    printf("Thoát");
}

//logic
void menu()
{
    printf("\nMENU\n");
    printf("1. Nhập giá trị các phần tử của mảng\n");
    printf("2. In giá trị các phần tử của mảng theo ma trận\n");
    printf("3. In ra các phần tử ở góc theo ma trận\n");
    printf("4. In ra các phần tử nằm trên đường biên theo ma trận\n");
    printf("5. In ra các phần tử nằm trên đường chéo chính và chéo phụ theo ma trận\n");
    printf("6. In ra các phần tử là số nguyên tố theo ma trận\n");
    printf("7. Thoát\n");
};

void addArray()
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("Nhập phần tử vị trí (%d,%d): ",i,j);scanf("%d", &a[i][j]);
        }
    }
};

void showArray()
{
    printf("Ma trận: \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
};

void cornerMatrix()
{
    printf("Các số ở góc ma trận là: \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if((i==0 && j==0) || (i==row-1 && j==col-1) || (i==0 && j==col-1) || (i==row-1 && j==0))
            {
                printf("%d ",a[i][j]);
            }else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
};

void boderMatrix()
{
    printf("Các số trên đường biên của ma trận là: \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==0 || j==0 || i==row-1 || j==col-1)
            {
                printf("%d ",a[i][j]);
            }else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
};

void mainDiagonalSecondDigonal()
{
    int start = 0, end = col-1;
    printf("Các số trên đường chéo chính và đường chéo phụ của ma trận là: \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(j == start || j == end)
            {
                printf("%d ",a[i][j]);
            }else
            {
                printf("  ");
            }
        }
        start++;
        end--;
        printf("\n");
    }
};

void isPrimeInMatrix()
{
    printf("Các số nguyên tố là: \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(isPrime(a[i][j]))
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    } 
};

int isPrime(int num)
{
    if (num<2)
    {
        return 0;
    }
    
    for(int i=2; i*i<=num; i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}