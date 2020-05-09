#include <iostream>
#include <windows.h>
#include "clearScreen.h"
#include "kms.h"
#pragma clang diagnostic ignored "-Winvalid-source-encoding"
using namespace std;

void printPage1(const char s[10000])
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "��ǰKMS������Ϊ: " << s << endl;
	cout << endl;
	cout << "1. ����Windows 10" << endl;
	cout << "2. ����Windows 8" << endl;
	cout << "3. ����Windows 7" << endl;
	cout << "4. ����Windows Server" << endl;
	cout << "5. ѡ��KMS������" << endl;
	cout << "6. ж�ز�Ʒ��Կ ( ���ü���״̬ ) " << endl;
	cout << endl;
	cout << "������Ҫִ�еĲ�����" << endl;
}

void printPageW10()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "1.Windows 10 רҵ��" << endl;
	cout << "2.Windows 10 רҵ����վ��" << endl;
	cout << "3.Windows 10 רҵ������" << endl;
	cout << "4.Windows 10 ������" << endl;
	cout << "5.Windows 10 ��ҵ��" << endl;
	cout << "6.Windows 10 ��ҵ�� LTSC 2019" << endl;
	cout << "7.Windows 10 ��ҵ�� LTSB 2016" << endl;
	cout << "8.Windows 10 ��ҵ�� 2015 LTSB" << endl;
	cout << endl;
	cout << "������Ҫ����İ汾��" << endl;
}

void printPageW8()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "1.Windows 8.1 רҵ��" << endl;
	cout << "2.Windows 8.1 ��ҵ��" << endl;
	cout << "3.Windows 8 רҵ��" << endl;
	cout << "4.Windows 8 ��ҵ��" << endl;
	cout << endl;
	cout << "������Ҫ����İ汾��" << endl;
}

void printPageW7()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "1.Windows 7 רҵ��" << endl;
	cout << "2.Windows 7 ��ҵ��" << endl;
	cout << endl;
	cout << "������Ҫ����İ汾��" << endl;
}

void printPageWS()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "1.Windows Server 1909/1903/1809 Datacenter" << endl;
	cout << "2.Windows Server 1909/1903/1809 Standard" << endl;
	cout << "3.Windows Server 2019 Datacenter" << endl;
	cout << "4.Windows Server 2019 Standard" << endl;
	cout << "5.Windows Server 2019 Essentials" << endl;
	cout << "6.Windows Server 2016 Datacenter" << endl;
	cout << "7.Windows Server 2016 Standard" << endl;
	cout << "8.Windows Server 2016 Essentials" << endl;
	cout << endl;
	cout << "������Ҫ����İ汾��" << endl;
}

void printPageKMS()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "1.kms.03k.org" << endl;
	cout << "2.kms.cangshui.net" << endl;
	cout << "3.kms.v0v.bid" << endl;
	cout << "4.kms.chinancce.com" << endl;
	cout << "5.kms.luody.info" << endl;
	cout << "6.kms.cz9.cn" << endl;
	cout << "7.kms.ddz.red" << endl;
	cout << endl;
	cout << "������Ҫѡ���KMS��������" << endl;
}

void printYesNo()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "ȷ����( Y/N )" << endl;
}

void printDone()
{
	clearScreen();
	cout << endl;
	cout << "  ***************************************" << endl;
	cout << "  *        BaiTang KMS Activator        *" << endl;
	cout << "  *        MadeBy Mo_Ink/BaiTang        *" << endl;
	cout << "  ***************************************" << endl;
	cout << endl;
	cout << "���������ִ�У�" << endl;
	cout << "���Ի������С��ѳɹ������Ʒ��������Ϊ�ɹ���" << endl;
	cout << "������ʧ�ܿ����ǰ汾ѡ�������ѡ����ȷ�İ汾���" << endl;
}