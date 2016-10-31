#include<iostream>
using namespace std;

class GradedActivity{
	private:
		int Grammar;
		int Spelling;
		int CorrectLength;
		int Content;
		
	public:
		GradedActivity()
		{
			Grammar=0;
			Spelling=0;
			CorrectLength=0;
			Content=0;
		}
		
		GradedActivity(int Grammar,int Spelling,int CorrectLength,int Content)
		{
			this->Grammar=Grammar;
			this->Spelling=Spelling;
			this->CorrectLength=CorrectLength;
			this->Content=Content;
		}
		
		void setGrammar(int G)
		{
			Grammar=G;
		}
		
		void setSpelling(int S)
		{
			Spelling=S;
		}
		
		void setCorrectLength(int CL)
		{
			CorrectLength=CL;
		}
		
		void setContent(int C)
		{
			Content=C;
		}
		
		int getGrammar()
		{
			return Grammar;
		}
		
		int getSpelling()
		{
			return Spelling;
		}
		
		int getCorrectLength()
		{
			return CorrectLength;
		}
		
		int getContent()
		{
			return Content;
		}
};

class Essay:public GradedActivity{
	private:
		int totalscore;
		
	public:
		Essay()
		{
			 totalscore=0;
		}
		
		Essay(int,int,int,int,int);
		
		int gettotalsocre()
		{
			return totalscore;
		}
};

Essay::Essay(int Grammar,int Spelling,int CorrectLength,int Content,int totalscore):GradedActivity(Grammar,Spelling,CorrectLength,Content){
	this->totalscore=totalscore;
}

int main()
{
	int grammarpoint;
	int spellingpoint;
	int correctlengthpoint;
	int contentpoint;
	int totalscore;
	
	cout<<"enter your grammar points ";
	cin>>grammarpoint;
	
	cout<<"enter your spelling points ";
	cin>>spellingpoint;
	
	cout<<"enter your CorrectLength points ";
	cin>>correctlengthpoint;
	
	cout<<"enter your content points ";
	cin>>contentpoint;
	
	totalscore=grammarpoint+spellingpoint+correctlengthpoint+contentpoint;
	
	Essay score(grammarpoint,spellingpoint,correctlengthpoint,contentpoint,totalscore);
	
	cout<<"your grammar points is "<<score.getGrammar()<<endl;
	cout<<"your spelling points is "<<score.getSpelling()<<endl;
	cout<<"your Correct length points is "<<score.getCorrectLength()<<endl;
	cout<<"your content points is "<<score.getContent()<<endl;
	//cout<<"the total score you get is "<<score.gettotalsocre();
	if(score.gettotalsocre()>100)
	{
		cout<<"error, there is no way you can get score more than 100 ";
	}
	else if(score.gettotalsocre()<=100)
	{
		cout<<"the total score you get is "<<score.gettotalsocre();
	}
}
