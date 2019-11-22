//2019-11-18 BOJ-2346(풍선 터뜨리기)
//처음에 접근을 완전 잘못해서 코드를 갈았다. 이후에 접근은 잘했지만
//v.size() 와 그냥 int 값의 미묘한 차이(unsigned) 때문에 틀렸다.
//주말에도 붙들고 있었는데 개짜증난다. 하지만 이런게 프로그래머의 일상이라고들 하던가.
#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> v;
int n;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int idx = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		v.push_back(make_pair(tmp, i + 1));
	}

	for (int i = 0; ; i++)
	{
		int tmp = v[idx].first;
		cout << v[idx].second << ' ';
		if (--n == 0)	break;

		v.erase(v.begin() + idx);
		idx += tmp;	//지우고 이동
		if (tmp > 0)	idx--;	//앞족으로 이동한다면 한칸을 지워버려서 달라진 크기 계산(음수는 계산따로함)
		if (idx < 0)	idx = n + idx % n;	//idx음수라면 모듈러를 2번 해줘야함
		idx %= n;
	}
}
