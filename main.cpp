#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Matrix.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	//1.初始化矩阵 3x3
	//1.1一维数组代替二维数组初始化 
	double nums1[]={1,2,3,4,5,6,7,8,8};
	Matrix M1(nums1,3,3);
	//1.2二维数组初始化
	double nums2[][3] ={{1,2,3},{4,5,6},{7,8,9}};
	Matrix M2(*nums2,3,3);
	//2.矩阵运算
	//2.1 矩阵相加
	Matrix MAdd=M1+M2;
	//2.2 矩阵相乘
	Matrix MMul=M1*M2;
	//2.3 矩阵转置
	Matrix MT=M1.Trans(); 
	//2.4 矩阵求逆
	Matrix MI=M1.Inverse();
	//3 输出
	cout<<"M1= "<<endl<<M1<<endl;
	cout<<"M2= "<<endl<<M2<<endl;
	cout<<"M1+M2= "<<endl<<MAdd<<endl;
	cout<<"M1T= "<<endl<<MT<<endl;
	cout<<"M1I= "<<endl<<MI<<endl; 
	system("pause");
	return 0;
}
