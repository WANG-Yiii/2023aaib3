///week03-1.cpp �Ҹ��D��:���c�Ⱥ�,���O�L�k�i��
///�p�G�]��range-based for �j�� �����bC++11 (2011����)�~���
///�p�G�ϥ�C++98 (1988�~��C++) �|�L�k���T�sĶ,����|�X��,�j��X����
///CodeBlocks 17.12 �� Setting-Compiler �ĲĤG�� -std=C++
#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char c : s){
		if(c !='2') cout << c;
	}
	return 0;
}
