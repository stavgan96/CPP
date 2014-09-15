#include <iostream>
#include <cmath>
using namespace std;
void main()
{
int a,b,c;
cout <<"vvesti peremenuyu a";
cin >> a;
cout << endl <<"vvesti peremenuyu b";
cin>>b;
cout << endl <<"vvesti peremenuyu c";
cin>> c;
float z=(((b+sqrt(pow(b,2)+4*a*c))/2*a)-((pow(a,3)*c)+(pow(b,-2))));
cout<<"peremenaya z="<<z<<endl;
system("pause");
}