/*
������ 2
��� ����� �������
� ������� ������ ������������� ������� ������ ��� �� �������� (��������
�������). ����� �� ������� � ������� ������ ������������� ������� ������ ������� (� ���� ��������), 
������� ��������� �������. ���������� ������� �� ����� �������� ��������� �������. 
������ ��� � ������ ������� ����� ������ �������� � ����.

������ ����������
```
// ������ ��� �������� ���: {2.5, 4.25, 3.0, 10.0}.
std::vector<float> prices {2.5, 4.25, 3.0, 10.0};
// ������ �������: {1, 1, 0, 3}, �� ���� ��� ������ �� ������� 1 � �� ������ � �������� 0 � 3.
std::vector<int> items {1, 1, 0, 3};

��������� ��������� ����� ����� 21.0.
```

������ � ������������
��� ��������� �������� ��������� ������� �� ����� ������ ����� �� ����� ��������, ���������� ������ �����.

��� �����������
��������� �� ��������� ������ �� ������� ������� ���.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    vector<float> prices {2.5, 4.25, 3.0, 10.0};
    vector<int> items {1, 1, 0, 3};

    float final_price = 0;

    for (size_t i=0; i<items.size();++i){
        final_price+=prices[items[i]];
    }

    cout << "��������� ��������� ����� ����� " << final_price;
}