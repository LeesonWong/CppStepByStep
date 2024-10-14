#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 20;

int g_c_a = 10;
int g_c_b = 20;

static const int g_s_c_a = 10;
static const int g_s_c_b = 10;

int main() {
    int a = 10;
    int b = 20;
    cout << "�ֲ�����a��ַ��" << &a << endl;
    cout << "�ֲ�����b��ַ��" << &b << endl;

    // const����
    const int c_a = 10;
    const int c_b = 20;
    cout << "�ֲ�const����c_a��ַ��" << &c_a << endl;
    char* str = "Hello World!";
    cout << "�ֲ�const����c_b��ַ��" << &c_b << endl;

    cout << "�ַ�������str��ַ��" << &str << endl;

    // ȫ�ֱ���
    cout << "ȫ�ֱ���g_a��ַ��" << &g_a << endl;
    cout << "ȫ�ֱ���g_b��ַ��" << &g_b << endl;

    // ��̬����
    static int s_a = 10;
    static int s_b = 20;
    cout << "��̬����s_a��ַ��" << &s_a << endl;
    cout << "��̬����s_b��ַ��" << &s_b << endl;

    // ���� �ַ�������
    cout << "�ַ���������ַ��" << &"Hello World" << endl;

    // ����
    cout << "ȫ��const����g_c_a��ַ��" << &g_c_a << endl;
    cout << "ȫ��const����g_c_b��ַ��" << &g_c_b << endl;

    cout << "ȫ��static const����g_s_c_a��ַ��" << &g_s_c_a << endl;
    cout << "ȫ��static const����g_s_c_b��ַ��" << &g_s_c_b << endl;

    static const int s_c_a = 10;
    static const int s_c_b = 10;
    cout << "�ֲ�static const����s_c_a��ַ��" << &s_c_a << endl;
    cout << "�ֲ�static const����s_c_b��ַ��" << &s_c_b << endl;

    return 0;
}