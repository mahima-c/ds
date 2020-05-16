#include<bits/stdc++.h>
using namespace std;


long long MaxPairwiseProduct(const vector<int>& numbers) {
	long long result=0;
	int n=numbers.size();
	 for (int i = 0; i<n; ++i) { 
		for (int j = i + 1; j<n; ++j) { 
			if (((long long)numbers[i]) * numbers [j] > result) { 
				result = ((long long) (numbers[i]))*numbers[j];}}}

		return result;
}



long long MaxPairwiseProductFast(const vector<int>& numbers) {
    long long max_product ;
    int n = numbers.size();
    int max1=-1;
    int max2=-1;

    for (int i = 0;i< n; ++i) {
	if((max1 == -1) + (numbers[i] > numbers[max1])){
		max1=i;

           }
	}
    for (int j = 0;j< n; ++j) {
	if((j != max1) && ((max2 == -1)+ (numbers[j]>numbers[max2]))){
			max2=j;

           }
	}

	return ((long long)(numbers[max1])) * numbers[max2];

}

int main() {
/*
   while(true){

    int n=rand() % 10 +2;
    cout<<n<<"\n";
    vector<int> a;
    for (int i = 0; i < n; ++i) {
       a.push_back(rand()%10000);
    }
    for (int i = 0; i < n; ++i) {
       cout<<a[i]<<"  ";
    }
	cout<<endl;

   long long res1= MaxPairwiseProduct(a); 
   long long res2= MaxPairwiseProductFast(a); 
	if(res1 != res2){
		cout<<"wrong ans:"<<res1<<"  "<<res2<<"\n";
			break;
}
	else{
			cout<<"ok\n";
}}
*/
	int n;
	cin>>n;
vector<int>numbers(n);
for(int i=0;i<n;i++){
cin >> numbers[i];}
long long ans= MaxPairwiseProductFast(numbers); 
   cout<<ans<<"\n";
 return 0;
}
