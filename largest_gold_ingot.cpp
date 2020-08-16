#include<bits/stdc++.h>

#include<iostream>

using namespace std;

int main()

{

	long long int n,sum=0;

	cin>>n;

	long long int a,b,m=pow(10,9)+7;

	cin>>a>>b;

	int arr[n];

	for(int i=0;i<n;i++){

		 cin>>arr[i];

		 sum=sum+arr[i];

	}

	long long int res=0,ans=0;

	stack <int> s;

	for(int i=0;i<n;i++){

		 while(s.empty()==false and arr[i]<=arr[s.top()]){

			  long long int tp=s.top();

			  s.pop();

			  res= arr[tp]* (s.empty()?i:(i-s.top()-1));

			  ans=max(ans%m,res);

		 }

		 s.push(i);

	}

	while(s.empty()==false){

		 long long int tp=s.top();

		 s.pop();

		 res=arr[tp]*(s.empty()? n:(n-s.top()-1));

		 ans=max(ans%m,res);

	}

	cout<<((sum%m-ans%m)%m*a%m*b%m)%m;

}