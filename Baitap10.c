#include<stdio.h>
#define MAX 100

int a[MAX];
int size;
int choose;
int active=0;
int num;
int indexNum;
char chooseCase6;
int check=0;

void menu();

void inputNum();

void showArray();

void addNUm();

void changeNum();

void delNum();

void arrangeArray(char x);

void findNum();

int main()
{
    while(1)
    {
        menu();
        printf("Lựa chọn của bạn: ");scanf("%d",&choose);
        if(choose == 8)
        {
            break;
        }
        if(active==0 && choose!=1)
        {
            printf("Chưa có dữ liệu\n");
            continue;
        }
        switch(choose)
        {
            case 1:
                printf("Nhập số lượng hần tử: ");scanf("%d",&size);
                if(size>100 )
                {
                    printf("Dữ liệu không hợp lệ\n");
                    break;
                }
                inputNum();
                active=1;
                break;
            case 2:
                showArray();
                break;
            case 3:
                addNUm();
                size++;
                break;
            case 4:
                changeNum();
                break;
            case 5:
                delNum();
                size--;
                break;
            case 6:
                printf("a. Giảm dần\n");
                printf("b. Tăng dần\n");
                printf("Lựa chọn của bạn: ");scanf(" %c",&chooseCase6);//Trước %c phải có [space] để bỏ qua newline
                arrangeArray(chooseCase6);
                break;
            case 7:
                findNum();
                break;
        }
    }
}
//logic
void menu()
{
    printf("\nMENU\n");
    printf("1. Nhập số phần tử và giá trị các phần tử\n");
    printf("2. In ra giá trị các phần tử đang quản lý\n");
    printf("3. Thêm một phần tử\n");
    printf("4. Sửa một phần tử\n");
    printf("5. Xóa một phần tử\n");
    printf("6. Sắp xếp các phần tử\n");
    printf("7. Tìm kiếm phần tử\n");
    printf("8. Thoát\n");
};

void inputNum()
{
    for(int i=0; i<size; i++)
    {
        printf("Nhập phần tử thứ %d: ",i);scanf("%d",&a[i]);
    }
    printf("Đã nhập thành công");
}

void showArray()
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
}

void addNUm()
{
    printf("Nhập phần tử muốn thêm: ");scanf("%d",&num);
    printf("Nhập vị trí muốn thêm: ");scanf("%d",&indexNum);
    if(indexNum>size)
    {
        printf("Vị trí không hợp lệ");
        return;
    }
    for(int i=0; i<size+1; i++)
    {
        if(i==indexNum)
        {
            for(int j=size; j>indexNum; j--)
            {
                a[j]=a[j-1];
            }
            a[indexNum]=num;
        }
    }
}

void changeNum()
{
    printf("Nhập vị trí muốn sửa: ");scanf("%d",&indexNum);
    printf("Nhập phần tử muốn sửa");scanf("%d",&num);
    for(int i; i<size; i++)
    {
        if(i==indexNum)
        {
            a[i]=num;
            break;
        }
    }
}

void delNum()
{
    printf("Nhập vị trí phần tử muốn xóa: ");scanf("%d",&indexNum);
    for(int i=0; i<size; i++)
    {
        if(i==indexNum)
        {
            for(int j=i; j<size; j++)
            {
                a[j]=a[j+1];
            }
        }
    }
}

void arrangeArray(char x)
{
    if ( x == 'a')
    {
        for (int i =0; i < size-1 ; i++)
        {
            for (int j =0; j <size -i -1;j++)
            {
                if (a[j] < a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("Sắp xếp thành công\n");
    }
    else if ( x == 'b')
    {
        for (int i =0; i < size -1 ; i++)
        {
            for (int j =0; j < size -i -1;j++)
            {
                if (a[j] > a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        printf("Sắp xếp thành công\n");
    }
}

void findNum()
{
    printf("Nhập phần tử cần tìm: ");scanf("%d",&num);
    check=0;
    for(int i=0; i<size; i++)
        {
            if(a[i]==num)
            {
                printf("%d được tìm thấy đầu tiên ở vị trí %d",num,i);
                check=1;
                break;
            }
        }
        if(!check)
        {
            printf("Không tìm thấy phần tử %d",num);
    } 
}