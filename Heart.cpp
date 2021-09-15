#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
 
string str10="a";

    
	cout<<"Would you marry me？ "<<"yes  or   no"<<endl;
	cin>>str10;

    float x, y;
    for (y = 1.5f; y >-1.4f; y -= 0.1f)
    {
        for (x = -1.5f; x <1.5f; x += 0.05f)
        {
            float a = x*x + y*y - 1;
            if ((a*a*a- x*x*y*y*y)<=0)//心形方程
                cout << '*';
            else cout << " ";
        }
        cout << endl;
    }
		system("pause");
    return 0;

}
