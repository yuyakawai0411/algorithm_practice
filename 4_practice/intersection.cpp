#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long cross(long long ax, long long ay, long long bx, long long by){
  return ax * by - ay * bx;
}

int main()
{
  long long x1, y1, x2, y2, x3, y3, x4, y4;

  cin >> x1 >> y1;
  cin >> x2 >> y2;
  cin >> x3 >> y3;
  cin >> x4 >> y4;

  long long ans1 = cross(x2 - x1, y2 - y1, x3 - x1, y3 - y1);
  long long ans2 = cross(x2 - x1, y2 - y1, x4 - x1, y4 - y1);
  long long ans3 = cross(x4 - x3, y4 - y3, x1 - x3, y1 - y3);
  long long ans4 = cross(x4 - x3, y4 - y3, x2 - x3, y2 - y3);

  if (ans1 == 0 && ans2 == 0 && ans3 == 0 && ans4 == 0){
		pair<long long, long long> A = make_pair(x1, y1);
		pair<long long, long long> B = make_pair(x2, y2);
		pair<long long, long long> C = make_pair(x3, y3);
		pair<long long, long long> D = make_pair(x4, y4);
		if (A > B) swap(A, B);
		if (C > D) swap(C, D);
    
		if (max(A, C) <= min(B, D)) cout << "Yes" << endl;
		else cout << "No" << endl;
		return 0;
  }

  // IsAB 線分ABがC,Dを分けへだてるか？
  // IsCD 線分CDがA,Bを分けへだてるか?
  bool IsAB = false, IsCD = false;
  if (ans1 >= 0 && ans2 <= 0) IsAB = true;
  if (ans1 <= 0 && ans2 >= 0) IsAB = true;
  if (ans3 >= 0 && ans4 <= 0) IsCD = true;
  if (ans3 <= 0 && ans4 >= 0) IsCD = true;

  if (IsAB == true && IsCD == true){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
	return 0;
}