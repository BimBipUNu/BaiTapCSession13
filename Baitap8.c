/*Xây dựng hàm tìm ước chung lớn nhất có 2 tham số, kết quả trả về là ước chung lớn nhất của 2 đối số truyền vào.
Viết chương trình khai báo và gán giá trị cho 2 số nguyên bất kỳ, sử dụng hàm đã xây dựng để tìm ước chung lớn nhất của chúng.*/
#include<stdio.h>
int UCLL(int a, int b)
{
    while( a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }else
        {
            b=b-a;
        }
    }
    printf("UCLL: %d",a);
    return 0;
}
int main()
{
    int num1 = 28, num2 = 12;
    UCLL(num1,num2);
}