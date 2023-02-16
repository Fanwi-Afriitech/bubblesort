#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class student{
	private:
		int score[5];
	public:
	void insert(){
			
			cout<<"enter a number \n";
			
			for(int i=0;i<5;i++)
			{
				cin>>score[i];
			}
		}
	void bubblesort(){
		int temp;
		int n=5;
	for(int out=0;out<5;out++){
		n=n-1;
		for(int in=0;in<n;in++){
			if(score[in]>score[in+1]){
				temp=score[in];
				score[in]=score[in+1];
				score[in+1]=temp;
			}
		}
	}
	}
		
	void display(){
			for(int i=0;i<5;i++){
				cout<<score[i]<<",";
			}
		}
};
int main() {
	student s1;
	s1.insert();
	s1.display();
	s1.bubblesort();
	s1.display();
}