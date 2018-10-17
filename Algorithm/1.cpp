//#include <string>
//#include <vector>
//#include <algorithm>
//
//
//using namespace std;
//
//int solution(vector<int> people, vector<int> tshirts) {
//	int answer = 0;
//	int index = 0;
//
//	sort(people.begin(), people.end());
//	sort(tshirts.begin(), tshirts.end());
//
//	int p_len = people.size();
//	int t_len = tshirts.size();
//	
//	for (int i = 0; i < p_len; i++) {
//		for (int j = index; j < t_len; j++) {
//			if (people[i] <= tshirts[j]) {
//				index++;
//				answer++;
//				break;
//			}
//		}
//	}
//
//	return answer;
//}