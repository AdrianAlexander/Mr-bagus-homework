#include <iostream>
#include<string>

using namespace std;

struct VOC{
	int FirstQuarterSales;
	int secondQuarterSales;
	int ThirdQuarterSales;
	int FourthQuarterSales;
	int TotalSales;
	float AverageSales;
	
};

int main()
{
	VOC VOC_North,VOC_East,VOC_South,VOC_West;
	
	cout<<"this the data of the North Company "<<endl<<endl;
	
	cout<<"enter the North company First Quarter Sales ";
	cin>>VOC_North.FirstQuarterSales;
	
	if (VOC_North.FirstQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"enter the North company Second Quarter Sales ";
	cin>>VOC_North.secondQuarterSales;
	
	if (VOC_North.secondQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"enter the North company Third Quarter Sales ";
	cin>>VOC_North.ThirdQuarterSales;
	
	if (VOC_North.ThirdQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"enter the North company Fourth Quarter Sales ";
	cin>>VOC_North.FourthQuarterSales;
	
	if (VOC_North.FourthQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"the total sales of North company is "<<VOC_North.FirstQuarterSales+VOC_North.secondQuarterSales+VOC_North.ThirdQuarterSales+VOC_North.FourthQuarterSales<<endl;
	cout<<"the average sales of the North Company is "<<(VOC_North.FirstQuarterSales+VOC_North.secondQuarterSales+VOC_North.ThirdQuarterSales+VOC_North.FourthQuarterSales)/4<<endl<<endl;
	
	
/*	if (VOC_North.FirstQuarterSales<0 || VOC_North.secondQuarterSales<0 || VOC_North.ThirdQuarterSales<0 || VOC_North.FourthQuarterSales<0)
	{
		return 0;
	}*/
	
	
	
	
	cout<<"this the data of the East Company "<<endl<<endl;
	
	cout<<"enter the East company First Quarter Sales ";
	cin>>VOC_East.FirstQuarterSales;\
	
	if(VOC_East.FirstQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"enter the East company Second Quarter Sales ";
	cin>>VOC_East.secondQuarterSales;
	
	if(VOC_East.secondQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"enter the East company Third Quarter Sales ";
	cin>>VOC_East.ThirdQuarterSales;
	
	if(VOC_East.ThirdQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"enter the East company Fourth Quarter Sales ";
	cin>>VOC_East.FourthQuarterSales;
	
	if(VOC_East.FourthQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"the total sales of East Company is "<<VOC_East.FirstQuarterSales+VOC_East.secondQuarterSales+VOC_East.ThirdQuarterSales+VOC_East.FourthQuarterSales<<endl;
	cout<<"the average sales of the East Company is "<<(VOC_East.FirstQuarterSales+VOC_East.secondQuarterSales+VOC_East.ThirdQuarterSales+VOC_East.FourthQuarterSales)/4<<endl<<endl;
	
	cout<<"this is the data of the South Company"<<endl<<endl;
	
	cout<<"enter the South company First Quarter Sales ";
	cin>>VOC_South.FirstQuarterSales;
	
	if(VOC_South.FirstQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"enter the South company Second Quarter Sales ";
	cin>>VOC_South.secondQuarterSales;
	
	if(VOC_South.secondQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"enter the South company Third Quarter Sales ";
	cin>>VOC_South.ThirdQuarterSales;
	
	if(VOC_South.ThirdQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"enter the South company Fourth Quarter Sales ";
	cin>>VOC_South.FourthQuarterSales;
	
	if(VOC_South.FourthQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"the total sales of South Company is "<<VOC_South.FirstQuarterSales+VOC_South.secondQuarterSales+VOC_South.ThirdQuarterSales+VOC_South.FourthQuarterSales<<endl;
	cout<<"the average sales of the South Company is "<<(VOC_South.FirstQuarterSales+VOC_South.secondQuarterSales+VOC_South.ThirdQuarterSales+VOC_South.FourthQuarterSales)/4<<endl<<endl;


	cout<<"this is the data of the West Company"<<endl<<endl;
	
	cout<<"enter the West company First Quarter Sales ";
	cin>>VOC_West.FirstQuarterSales;
	
	if(VOC_West.FirstQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"enter the West company Second Quarter Sales ";
	cin>>VOC_West.secondQuarterSales;
	
	if(VOC_West.secondQuarterSales)
	{
		return 0;
	}
	
	cout<<"enter the West company Third Quarter Sales ";
	cin>>VOC_West.ThirdQuarterSales;
	
	if(VOC_West.ThirdQuarterSales)
	{
		return 0;
	}
	
	cout<<"enter the West company Fourth Quarter Sales ";
	cin>>VOC_West.FourthQuarterSales;
	
	if(VOC_West.FourthQuarterSales<0)
	{
		return 0;
	}
	
	cout<<"the total sales of West Company is "<<VOC_West.FirstQuarterSales+VOC_West.secondQuarterSales+VOC_West.ThirdQuarterSales+VOC_West.FourthQuarterSales<<endl;
	cout<<"the average sales of the West Company is "<<(VOC_West.FirstQuarterSales+VOC_West.secondQuarterSales+VOC_West.ThirdQuarterSales+VOC_West.FourthQuarterSales)/4<<endl<<endl;
	
	return 0;
	
	
	
}
