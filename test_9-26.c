#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
//int main()
//{
	//printf("hello\n");
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(long));

	//return 0;
//}
//int main()
//{
	//����2�����ĺ�
	//int num1 = 0;
	//int num2 = 0;
	//int sum = 0;
	//��������-ʹ�����뺯��
	//scanf("%d%d", &num1, &num2);//ȡ��ַ����&
	//sum=num1+num2;
	//printf("sum=%d\n",sum);
	//return 0;

	//const���εĳ�����
	//const int num = 10;
	//printf("%d/n",num );
	//num = 8;
	//printf("%d/n", num);
	// C2166.cpp
	 //const-������


        //ö�ٳ���
        //ö��--�о�
      
//enum Sex



//{
//	MALE,
//	FEMALE,
//	SECRET,

	//#define MAX 10
	//define����ı�ʶ������



//};
//int main()
//{
//	printf("%d/n", MALE);
//	printf("%d/n", FEMALE);
//	printf("%d/n", SECRET);
//	return 0;
//
//}
//int main()
//{
	//char arr1[] = "abc";
	//char arr2[]= { 'a', 'b', 'c',0 };\0�ַ���������־
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	 //�����ڼ�����洢��ʱ�򣬴洢����2����
	//return 0;
	//ASCII��\0-0,
	//strlen-string length-�����ַ��ĳ���     �Ӷ����Դ�ӡ��printf("%d\n",strlen(arr1));




//}
/*���ܽ���Ƕ��
int main()
{//ת���ַ�
	printf("c:\test\32\test.c");ˮƽ�Ʊ��-\t
	printf("(are you ok \? \?)\n");
	printf("(are you ok \\t)\n");���Ҫǿ����ô��Ҫ��\�����Ų��ᱻת��
	printf("%d\n",strlen("c:\test\32\test.c"));


	
	return 0;
int main ()*/

//ѡ�����
/*int main()
{
	int input = 0;
	printf("������ϿƼ�ѧԺ\n");
	printf("��Ҫ�ú�ѧϰ��\?(1\0)>: ");
	scanf("%d", &input);
	if (input == 1)
	  printf("��offer\n");
	else
	  printf("�ؼ�����\n");
	return 0;

}*/

//ѭ�����whileѭ��
//int main()
//{
//	int line = 0;
//	printf("������ϿƼ�ѧԺ\n");
//
//	while (line < 10000)
//	{
//		printf("��һ�д���:%d\n", line);
//		line++;
//	}
//	if (line >= 10000)
//		printf("һ�ݺ�offer\n");
//	return 0;
//
//} 

//����Add(intx,inty)
//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//�Զ��庯��  �⺯��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*printf("%d\n", arr[5]);*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	    int a = 5 % 2;
//		printf("%d\n", a);ȡģ
//		return 0;


//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<<���Ʋ�����
//	//>>���Ʋ�����
//	int a = 1;
//	int b = a << 2;
//	//b = a + 1;
//	printf("%d/n", b);
//	printf("%d/n", a);
//}
//�����ƣ�1 1 1 1  =1*2^3

/*int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	//011
	//101
	printf("%d\n",c);
	return 0;
	//&��λ��   ��ͬ1��ͬΪ0��ͬΪ1
	//^��λ���    ����ͬ����
	//|��λ��   ��1 ��Ϊ1����Ϊ0

}*/


//=��ֵ ==�ж����
//c���������ж����0-��  ��0-��

//int main ()
//{
//
//	//int a = 10;
//	//sizeof����ı���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//ע��int���ã���
//	return 0;
//}



//��֧����ѭ�����
//c������һ�Žṹ���ĳ����������
//1.˳��ṹ
//2.ѡ��ṹ
//3.ѭ���ṹ

//if���1
//else  if���2
//else���3

//int main()

	/*int age = 9;
	if (age < 18)
	{
		printf("δ����\n");
		printf("����̸����\n");
	}
	
	else
	{
		if (age > 18 && age <= 28)
			printf("����\n");

	else if (age >= 28 && age < 50)
	printf("׳��\n");
	else if (age >= 50 && age < 100)
	printf("����\n");
	else
	printf("�ϲ���\n");
	}*/
	
	//else 
	//	printf("����\n");
	///*	if ("age<18");
	//	printf(" δ����\n");*/


	/*int a = 0;
	int b = 2;
	if (a == 0)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");*/
	//else�������δƥ���ifƥ��    Ҳ����ֱ�Ӹ������ŴӶ�ֱ��ȷ��ƥ��
	/*int num = 4;
	if (num == 5)
	{return (1);  }

	
*/

//=��ֵ ==�ж����
	//��ҵ�г����е���������100����

	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d", i);
		i++;
	}*/
	
	
	/*int i = 1;
	while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d", i);
		i++;
	}
	return 0;*/



//int main()
//{
     /*int day =0;
	 scanf("%d",&day);
	 if(1 == day)
	     printf("����1\n");
    if(2 == day)
	     printf("����2\n");
    if(3 == day)
	     printf("����3\n");
	if(4 == day)
	     printf("����4\n");
	if(5 == day)
		 printf("����5\n");
    if(6 == day)
	     printf("����6\n");
    if(7 == day)
	     printf("����7\n");
		 return 0;*/
	//��������̫�鷳���Ը���switch���
	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("������\n");
		break;
	}*/
	//switch ��������䡢����break�����������������

	/*int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			printf("������\n");
				break;
			case 6:
			case 7:
			printf("��Ϣ��\n");
				break;
				
	}*/
	
		   //case 7:
		   //printf("��Ϣ��\n");
			 //  break;int day = 0;
	//int m = 1;
   //scanf("%d", &day);
   //switch (day)
   //{
   //case 1:
	 //  if (m == 1)
		//   printf("hehe\n");
		//   case 2:
		//   case 3:
		 //  case 4:
		 //  case 5:
		 //  printf("������\n");
			//   break;
		 //  case 6:
		  // default:
		//	 printf("�������\n");
		//	 break;
   //}


	
	
	
	
//	return 0;

//ѭ�����
//while ѭ�����
	/*int i = 1;

	while(i<=10)
	{
		if (i == 5)
			break;
		printf("%d", i);
		i++;
	}
	return 0;*/
 



//��֧ѭ����䣨2��
	/*int ch = getchar();

	putchar(ch);
	printf("%c\n", ch);
	return 0;*/
	/*int ch = 0;
	while ((ch=getchar() !=EOF)
   {
		putchar(ch);

	}



	return 0;*/ 
	//EOF - end  of file �ļ�������־*�����ļ���
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0}; 
	//printf("����������:>");
	//scanf("%s", password);//�������룬�������password��
	////��������ʣ��һ��"\n"
	//while ((ch = getchar()) != '\n')
	//{
	//	;
	//}

	//printf("��ȷ��(Y/N):>");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");

	//}
	//else
	//{
	//	printf("����ȷ��\n");
	//}
	//	
	//	return 0;
	//	//���뺯��password,scanf���뻺����123456\n
 
//int main ()
//{int ch = 0;
//while ((ch = getchar()) != EOF)
//{
//	if (ch < '0' || ch>'9')
//		continue;
//	putchar(ch);
//
//
//}
//return 0;
//	}

//Forѭ��
// int��ʼ�� while����    i++����   �� ���1 ���2  ���3 ��

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d", i);
//	}
//	return 0;
//}


/* Note:Your choice is C IDE */



//#include<stdio.h>
//
//
//
//#include<math.h>
//
//
//
//#include<windows.h>
//
//
//
//#include<time.h>
//
//
//
//#include<stdlib.h>
//
//
//
//void SetColor(unsigned short ForeColor, unsigned short BackGroundColor)
//
//
//
//{
//
//
//
//	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
//
//
//
//	SetConsoleTextAttribute(hCon, (ForeColor % 16) | (BackGroundColor % 16 * 16));
//
//
//
//}
//
//
//
//int main()
//
//
//
//{
//
//
//
//
//
//
//
//	float x, y;
//
//
//
//	int s = 0, n, i, j;
//
//
//
//	for (i = 1; i <= 50; i++)
//
//
//
//	{
//
//
//
//		SetColor(0, 14);
//
//
//
//		printf(" ");
//
//
//
//		printf("%d%%", 2 * i);
//
//
//
//		Sleep(101 - 1 * i);
//
//
//
//		printf("\b\b\b");
//
//
//
//	}
//
//
//
//	SetColor(15, 0);
//
//
//
//	printf("\b\n������ɣ���������:");
//
//
//
//	Sleep(2000);
//
//
//
//	system("cls");
//
//
//
//	do
//
//
//
//	{
//
//
//
//		system("color 0E");
//
//
//
//		for (i = 0; i <= 56; i++)
//
//
//
//		{
//
//
//
//			if (i >= 20) { printf("*"); Sleep(10); }
//
//
//
//			else printf(" ");
//
//
//
//		}printf("\n");
//
//
//
//		for (i = 0; i <= 56; i++)
//
//
//
//		{
//
//
//
//			if (i >= 20) { printf("*"); Sleep(10); }
//
//
//
//			else printf(" ");
//		}
//
//
//
//		printf("\n\t\t\t����Ҫ����������:\n");
//
//
//
//		printf("\n\t\t\t1:��love��ɵ����Σ�\n");
//
//
//
//		printf("\n\t\t\t2:������ַ���ɵ����Σ�\n");
//
//
//
//		printf("\n\t\t\t3:�����������ɵ����Σ�\n");
//
//
//
//		printf("\n\t\t\t4:�������ɫ��ɵ����Σ�\n");
//
//
//
//		printf("\n\t\t\t5:�˳���\n");
//
//
//
//		for (i = 0; i <= 56; i++)
//
//
//
//		{
//
//
//
//			if (i >= 20) { printf("*"); Sleep(10); }
//
//
//
//			else printf(" ");
//
//
//
//		}printf("\n");
//
//
//
//		for (i = 0; i <= 56; i++)
//
//
//
//		{
//
//
//
//			if (i >= 20) { printf("*"); Sleep(10); }
//
//
//
//			else printf(" ");
//
//
//
//		}
//
//
//
//		printf("\n\t\t\t");
//
//
//
//		srand(time(NULL));
//
//
//
//		scanf("%d", &n);
//
//
//
//		system("cls");
//
//
//
//		switch (n)
//
//
//
//		{
//
//
//
//		case 1:
//
//
//
//			for (x = 1.3; x >= -1.1; x -= 0.1)
//
//
//
//			{
//				for (y = -2; y <= 1.4; y += 0.053)
//
//
//
//				{
//
//
//
//					if (pow(x * x + y * y - 1, 3) - x * x * x * y * y <= 0)
//
//
//
//					{
//
//
//
//						s++;
//
//
//
//						if (s % 4 == 1)printf("l");
//
//
//
//						if (s % 4 == 2)printf("o");
//
//
//
//						if (s % 4 == 3)printf("v");
//
//
//
//						if (s % 4 == 0)printf("e");
//
//
//
//						Sleep(2);
//
//
//
//					}
//
//
//
//					else
//
//
//
//						printf(" ");
//
//
//
//				}
//
//
//
//				printf("\n");
//
//
//
//			}
//
//
//
//			printf("�������,�������������ҳ�棡"); break;
//
//
//
//		case 2: for (x = 1.3; x >= -1.1; x -= 0.1)
//
//
//
//		{
//			for (y = -2; y <= 1.4; y += 0.053)
//
//
//
//			{
//
//
//
//				if (pow(x * x + y * y - 1, 3) - x * x * x * y * y <= 0)
//
//
//
//				{
//
//
//
//					printf("%c", rand() % 10 + rand() % 10 + 97);
//
//
//
//					Sleep(2);
//
//
//
//				}
//
//
//
//				else
//
//
//
//					printf(" ");
//
//
//
//			}
//
//
//
//			printf("\n");
//
//
//
//		}
//
//
//
//			  printf("�������,�������������ҳ�棡"); break;
//
//
//
//		case 3:for (x = 1.3; x >= -1.1; x -= 0.1)
//
//
//
//		{
//			for (y = -2; y <= 1.4; y += 0.053)
//
//
//
//			{
//
//
//
//				if (pow(x * x + y * y - 1, 3) - x * x * x * y * y <= 0)
//
//
//
//				{
//
//
//
//					printf("%d", rand() % 10);
//
//
//
//					Sleep(2);
//
//
//
//				}
//
//
//
//				else
//
//
//
//					printf(" ");
//
//
//
//			}
//
//
//
//			printf("\n");
//
//
//
//		}
//
//
//
//			  printf("�������,�������������ҳ�棡"); break;
//
//
//
//		case 4: for (x = 1.3; x >= -1.1; x -= 0.1)
//
//
//
//		{
//			for (y = -2; y <= 1.4; y += 0.053)
//
//
//
//			{
//
//
//
//				if (pow(x * x + y * y - 1, 3) - x * x * x * y * y <= 0)
//
//
//
//				{
//
//
//
//					SetColor(0, rand() % 6 + 10);
//
//
//
//					printf(" ");
//
//
//
//					Sleep(2);
//
//
//
//				}
//
//
//
//				else
//
//
//
//				{
//					SetColor(0, 0);
//
//
//
//					printf(" ");
//				}
//
//
//
//			}
//
//
//
//			printf("\n");
//
//
//
//		}
//
//
//
//			  SetColor(15, 0);
//
//
//
//			  printf("�������,�������������ҳ�棡"); break;
//
//
//
//		default:break;
//
//
//
//		}
//
//
//
//		getch();
//
//
//
//		system("cls");
//
//
//
//	} while (n != 5);
//
//
//
//}

//int main()
//{
//	int i = 0;
//    for (i = 0; i < 10; i++)
//{   
//		if (i == 5)
//		printf("hehe\n");
//		//printf("haha\n");
//
//	}
//	return 0;
//}

//for��� ��ѭ���Ŀ��Ʊ�����ȡֵ����"ǰ�պ�����"д��

//int main()����1
//{
//	for (;;);����ѭ��for���
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	{
//		for (i = 0; i < 10; i++)
//		{
//			for (j = 0; j < 10; j++)
//				printf("hehe\n");
//		}
//	}
//	return 0;
//}�Ӷ��ܹ��ﵽһ�ٸ��Ǻ�����i=0ȥ����ô��ֻ�ܵõ�10���Ǻ���Ϊj�ﵽ���Լ��Ķ�����
 
//����2
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)k����ֵ��������ѭ�����Ϊ��0��������ѭ��
//		k++;
//		return 0;
//}

//do-whileѭ��
//int main()
//{
//	int i = 1;
//	do {
//		
//		
//		printf("%d", i);
//		i++
//
//	} while (i <= 10);
//		return 0;
//}
// 
// 
// 
// ��ϰ1.
//int main()
//{ 
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//
//	scanf("%d", &n);
//	for(i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n",ret);
//	return 0;
//}��for�����n�Ľ׳�


//��ϰ2.
//int main()
//{
//	
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for(n=1;n<=10;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//
//
//	}
//	printf("sum= %d\n", sum);
//		return 0;
//}��for�����n�Ľ׳˵��ܺ�


//��ϰ3.�۰�����㷨�����ֲ����㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10,11 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ�������Ϊint������sizeofֻ��Ҫ��1
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left <= right)
//	{
//
//		int mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("û���ҵ�\n");
//		}
//	}
//	return 0;
//}


//��ϰ4.
//int main()
//{
//	char arr1[] = "welcome to china!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//���ܼ�1��Ϊ����char a b cΪ���ַ�4-2=2�� 0 1 2������Ҫ2
//	int right = strlen(arr1) - 1;//Ϊ��һ��д��
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s/n", arr2);
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls-��պ���
//		left++;
//		right--;
//	}
//	return 0;
//}



//��ϰ5.
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "��ĳ��˧b") == 0)//strcmp�����Ƚ������ַ�����ȶ�==����
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//
//		}
//	}
//		if (i == 3)
//			printf("��������������˳�����\n");
//		return 0;
//	}


//�����ֵ�������У���Ҫʹ����ʱ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b ,&c);//213��Ҫ�ÿո�����������ո��Ĭ�ϳ�һ����
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//
//	}
//	printf("%d %d %d\n", a, b, c);
//		return 0;
//}


int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d\n", i);

	}
	return 0;

}



