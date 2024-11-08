// ��ӡ
/*
    %d-��ӡ����
    %c-��ӡ�ַ�
    %s-��ӡ�ַ���
    %f-��ӡfloat����
    %lf-��ӡdouble����
    %zu-��ӡsizeof�ķ���ֵ
*/

// ת���ַ�
/*
    \a  �����ַ� ����
    \b  �˸��
    \f  ��ֽ��

    \n  ����
    \r  �س�
    \t  ˮƽ�Ʊ��
    \v  ��ֱ�Ʊ��

    \?  �ַ����ڲ��ʺ�
    \'  �ַ�����'
    \"  �ַ����ڲ�˫����
    \\  �ַ����ڲ�б��


    \ddd �˽�����
    \xdd ʮ��������

*/

// ASCII
/*
    '0'--48

    'A'--65
    'a'--97
*/
#include <stdio.h>
#include <string.h>

int main()
{
    printf("%c\r", '\'');
    printf("\n");
    printf("abcd\0efg");
    printf("\n");
    printf("abcd\\0efg");
    printf("\n");

    printf("%c\n", 48);
    printf("%c\n", 65);
    printf("%c\n", 97);
    printf("%c\n", 70);

    printf("\n");
    printf("%c\n", '\130');
    printf("%d\n", '\130');
    printf("A�İ˽��Ƶ�ASCIIֵΪ%o,ʮ���Ƶ�ASCIIֵΪ%d\n", 65, 'A');
    printf("Z��ʮ�����Ƶ�ASCIIֵΪ%x,�涨�������Ϊ4��ʮ������Ϊ%#06x,�涨��ĸ��д��ʮ������Ϊ%X\n", 90, 'Z', '\132');
    printf("�涨�����0x��ʶ�ҿ������Ϊ9(����0x��ʶռ�������)����ĸ��д��ʮ������Ϊ%#09X\n", 'Z');
    printf("�涨�����0x��ʶ�ҿ������Ϊ1(����0x��ʶռ�������)����ĸ��д��ʮ������Ϊ%#01X\n", 'Z');

    printf("\n");
    printf("%zu\n", strlen("qwer t"));
    printf("%zu\n", strlen("qwert"));
    printf("%zu\n", strlen("c:\test\325\test.c"));
    printf("c:\test\628\test.c");
    printf("\a\n"); // ����
    printf("c:\\test\\628\\te abcd\bst.c");

    return 0;
}