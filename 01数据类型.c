#include <stdio.h>

int main()
{
    //�������͵���ռ�洢�ռ��С
    printf("char�Ĵ�С��%zu���ֽ�,%d����λ\n", sizeof(char), 8 * sizeof(char));
    printf("short�Ĵ�С��%zu���ֽ�,%d����λ\n", sizeof(short), 8 * sizeof(short));
    printf("int�Ĵ�С��%zu���ֽ�,%d����λ\n", sizeof(int), 8 * sizeof(int));
    printf("long�Ĵ�С��%zu���ֽ�,%d����λ\n", sizeof(long), 8 * sizeof(long));
    printf("long long�Ĵ�С��%zu���ֽ�,%d����λ\n", sizeof(long long), 8 * sizeof(long long));
    printf("float�Ĵ�С��%zu���ֽ�,%zu����λ\n", sizeof(float), 8 * sizeof(float));
    printf("double�Ĵ�С��%zu���ֽ�,%d����λ\n", sizeof(double), 8 * sizeof(double));

    return 0;
}

//1.û���ַ����������.�ַ�������һ���ַ��������.
//2.�ַ������ַ�����洢,��'\0'��β   ('\0'���ַ����Ľ����ַ�(��\�Ľ�ת���ַ�),�����ַ������ȵĺ������������ַ��ǽ�ȥ)