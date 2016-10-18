#include <iostream>
#include <string>
using namespace std;

//const int numwords=400;

struct soccer{
	string playersname;
	int playersnumber;
	int pointscored;
};

int main()
{
	soccer soccerdata[12];
	
	int totalscore;
	int highestscore=0;
	string Topplayer;
	int HSR;
	int Topplayernumber;
	
	for (int i=0;i<12;i++)
	{
		cout<<"enter the player name ";
		getline(cin,soccerdata[i].playersname);
		
		cout<<"enter the player number ";
		cin>>soccerdata[i].playersnumber;
		
		cout<<"enter the point scored by the player ";
		cin>>soccerdata[i].pointscored;
		
		cin.ignore();
		
		cout<<endl;
		//totalscore=totalscore+soccerdata[i].pointscored;
	}
	
	for(int z=0;z<12;z++)
	{
		totalscore +=soccerdata[z].pointscored;
	}
	
	cout<<"total score of the team "<<totalscore<<endl;
	
	
	for (int j=0;j<12;j++)
	{
		if(highestscore<soccerdata[j].pointscored)
		{
			HSR=j+1;
			highestscore=soccerdata[j].pointscored;
			Topplayer=soccerdata[j].playersname;
			Topplayernumber=soccerdata[j].playersnumber;
		}
	}
	
	cout<<"the highest score is "<<highestscore<<endl;
	cout<<"the top scorer of the team is "<<Topplayer<<endl;
	cout<<"the top scorer number is "<<Topplayernumber;
	
	
	//cout<<"the total score of all player is "<<totalscore;
	
	
	
	return 0;
}
